# LAB-03_HWSCOD
## How to work with the lab :
1. install WSL for people with windows. With ubuntu, just continue!
2. on the terminal type sudo ./install_everything.sh, this is will install everything for you
3. Write your code in sources/main.cpp
4. To upload code do : arm-linux-gnueabi-g++ Sources/main.cpp -o <output_lab3> -static
5. upload the code the root section of your SD Card, this will simply appear in linux under //mnt/<username>/root
to do this type : sudo cp <output_lab3> /media/pyro/root1
6. Log in to the linux terminal via uart on the comport that appears 
7. on the comport,  write chmod 755 <output_lab3>  to allow for executeable access!
8. then upload the bitstream either via vitis or by pasting it into the BOOT partition of the SDCard 
9. Now FInally Run ./<output_lab3>  

