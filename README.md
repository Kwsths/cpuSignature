# cpuSignature
From the following the: https://drive.google.com/drive/folders/1M6U7kAx36MRMHpl52LHSX7-CAUoQJb8F?usp=sharing you can download the .iso file that contains our tool
# Directions to use our tool

After downloading the .iso file use it  to create a bootable usb stick with that file. [Here](https://ubuntu.com/tutorials/create-a-usb-stick-on-windows#1-overview) you can find usefull information on how to do it.

## Tool use
***
After booting your device with Linux, do the following
```sh
$ df -h # check the partition where is mounted the usb drive
$ sudo mount -o remount,rw /partition/identifier /cdrom
$ cd /cdrom/boot/cpu-signature
$ sudo cp -R measure/ /mnt/.
$ cd /mnt/measure/
$ ./multiple_execs.h # run it two times if you want
```
After running the above commands  the measurements from your pc will be stored on /cdrom/boot/cpu-signature/{md5sum-string} on your usb stick.
Just send a pull request adding  the files in the uploads folder of this repository in order to include your machine in the data set.
