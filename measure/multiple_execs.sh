#!/bin/bash

echo "Starting measurememnts"
sudo sh -c "echo -1 > /proc/sys/kernel/perf_event_paranoid"
if [ -e perf_try ]
then
	echo "File for module exists, so we skip it!"
else
	echo "Creating file for module!"
	sudo mknod perf_try c 100 0
fi


#usb_path=$(df -h | grep "UBUNTU"| awk '{split($0,a," "); print a[6] " " a[7]}')
uuid=$(uuidgen)
meta="$uuid-meta.txt"
data="$uuid-data"
# echo "Results will be stored into: $usb_path"
echo "File with name: $meta"
echo "File with name data: $data"

#sudo mv test_file.txt "$usb_path"/boot/
sudo touch "$meta"
sudo ./cpuid | sudo tee -a $meta >> /dev/null
sudo sh -c "dmidecode --type 17| grep -E 'Type|Speed' >> $meta"
results_dir=$(md5sum "$meta" | awk '{split($0,a," ");print a[1]}')
#cd "$usb_path"/boot/
#sudo mkdir /mnt/sd1/boot/cpu-signature/"$results_dir"
sudo mkdir /cdrom/boot/cpu-signature/"$results_dir"
#sudo mkdir "$results_dir"

#gcc perftry.c -o perftry -lm 
for i in {1..100}
do
	echo "Running $i times"
	sudo insmod modperf.ko
	sudo touch "$data$i.txt"
	sudo ./perftry | sudo tee -a $data$i.txt >> /dev/null
	sudo mv $data$i.txt /cdrom/boot/cpu-signature/"$results_dir"
	sudo rmmod modperf
done
sudo mv $meta /cdrom/boot/cpu-signature/"$results_dir"

echo "Done"
