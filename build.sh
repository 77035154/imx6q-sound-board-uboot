#!/bin/sh
ROOTDIR=
CROSS_COMPILE=./gcc/linux-x86/arm/arm-eabi-4.8/bin/arm-eabi-

make mx6qsabresdandroid_defconfig
rm ./lib/display_options.o
rm ./lib/built-in.o

make -j4 ARCH=arm CROSS_COMPILE=$CROSS_COMPILE 
cp u-boot.imx /mnt/hgfs/share/mfgtools/Profiles/Linux/OS\ Firmware/files/android/sabresd_cqsound/
