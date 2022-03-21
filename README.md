# cpuSignature
From the follow the link: https://drive.google.com/drive/folders/1M6U7kAx36MRMHpl52LHSX7-CAUoQJb8F?usp=sharing you can download the .iso file that contains our tool
# directions to use our tool

After downloading the .iso file use it in order to create a bootable usb stick with that file. On the following link you can find usefull information about how to do it:https://ubuntu.com/tutorials/create-a-usb-stick-on-windows#1-overview .
## Use of the tool
***
After boot with linux on your device do the following
```
$ df -h # check the partition where is mounted the usb drive
$ sudo mount -o remount,rw /partition/identifier /cdrom
$ cd /cdrom/boot/cpu-signature
$ sudo cp -R measure/ /mnt/.
$ cd /mnt/measure/
$ ./multiple_execs.h # run it two times if you want
```
After performing the command above the measurements from your pc will be stores on /cdrom/boot/cpu-signature/{md5sum-string} on your usb stick.
Just upload the files on uploads folder of this repository in order to check you machine.
