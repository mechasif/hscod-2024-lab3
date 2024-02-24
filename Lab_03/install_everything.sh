#! /bin/bash
mkdir build
apt install gcc make gcc-arm-linux-gnueabi binutils-arm-linux-gnueabi  -y
apt install libc6-dev libc6 -y
arm-none-eabi-gcc --version 
arm-none-eabi-g++ --version
arm-none-eabi-gdb --version
arm-linux-gnueabi-g++ --version
echo all done !
echo To upload code do : arm-linux-gnueabi-g++ Sources/main.cpp -o output_lab3  -static
