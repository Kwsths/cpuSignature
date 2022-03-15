#include <linux/kernel.h>   /* We're doing kernel work */
#include <linux/module.h>  /* Specifically, a module */
#include <linux/fs.h>
#include <asm/uaccess.h>   /* for get_user and put_user */
#include <linux/interrupt.h>
#include "perftry.h"
#define SUCCESS 0
#define DEVICE_NAME "perf_try"
#define BUF_LEN 80/* * Is the device open right now? Used to prevent * concurent access into the same device */
#define DEBUG 1
static int Device_Open = 0;/* * The message the device will give when asked */
static char Message[BUF_LEN];/* * How far did the process reading the message get? * Useful if the message is larger than the size of the * buffer we get to fill in device_read. */
static char *Message_Ptr;

MODULE_LICENSE("GPL");


static int device_open(struct inode *inode, struct file *file){
    #ifdef DEBUG
        printk(KERN_INFO "device_open(%p)", file);
    #endif

    if(Device_Open) {
        return -EBUSY;
    }

    Message_Ptr = Message;
    try_module_get(THIS_MODULE);
    return SUCCESS;
}

static int device_release(struct inode *inode, struct file *file){
    #ifdef DEBUG
        printk(KERN_INFO "device_release(%p)", file);
    #endif

    Device_Open--;
    module_put(THIS_MODULE);
    return SUCCESS;
}

static long device_ioctl(   /* see include/linux/fs.h struct inode *inode, this for kernel < 2.6.35*/
         struct file *file, /* ditto */
         unsigned int ioctl_num,    /* number and param for ioctl */
         unsigned long ioctl_param)
{
    // volatile int i;
    // volatile int sum;
    // volatile long pow;

    /* 
     * Switch according to the ioctl called 
     */
    switch (ioctl_num) {
    case IOCTL_DISABLE_INTERUPTS:
        __asm__("cli");
        break;

    case IOCTL_ENABLE_INTERUPTS:
        __asm__("sti");
        break;
    }

    return SUCCESS;
}



struct file_operations Fops = {
    .unlocked_ioctl = device_ioctl,
    .open = device_open,
    .release = device_release
};

/* 
 * Initialize the module - Register the character device 
 */
int init_module()
{
    
    int ret_val;
    //__asm__("cli");
    //disable_irq(15);
    /* 
     * Register the character device (atleast try) 
     */
    ret_val = register_chrdev(MAJOR_NUM, DEVICE_NAME, &Fops);

    /* 
     * Negative values signify an error 
     */
    if (ret_val < 0) {
        printk(KERN_ALERT "%s failed with %d\n",
               "Sorry, registering the character device ", ret_val);
        return ret_val;
    }
    printk(KERN_INFO "initializing module");

    return 0;
}

/* 
 * Cleanup - unregister the appropriate file from /proc 
 */
void cleanup_module()
{
    //enable_irq(15);
    //__asm__("sti");
    unregister_chrdev(MAJOR_NUM, DEVICE_NAME);
    printk(KERN_INFO "unregister module");
}



