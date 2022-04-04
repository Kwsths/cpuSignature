# cpuSignature
From the following the: https://drive.google.com/drive/folders/1M6U7kAx36MRMHpl52LHSX7-CAUoQJb8F?usp=sharing you can download the .iso(ubuntu-18.04.4-desktop-amd64-custom-cpu-sign.iso) file that contains our tool
# Directions to use our tool

After downloading the .iso file use it  to create a bootable usb stick with that file. [Here](https://ubuntu.com/tutorials/create-a-usb-stick-on-windows#1-overview) you can find usefull information on how to do it.

## Tool use
***
After booting your device with Linux, do the following
```sh
$ cd /mnt/measure/
$ ./multiple_execs.sh # run it two times if you want
```
After running the above commands  the measurements from your pc will be stored on /cdrom/boot/cpu-signature/{md5sum-string} on your usb stick.
Just send a pull request adding  the files in the uploads folder of this repository in order to include your machine in the data set.
