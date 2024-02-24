# hscod-2024-public

## Lab 1
You can add board files in Vivado. Some Digilent boards don't show up in Vivado on fresh install and have to be added manually in Vivado.

### Installing Digilent Board Files [1]
Digilent provides board files for each FPGA development board. These files make it easy to select the correct part when creating a new project and allow for automated configuration of several complicated components (including the Zynq Processing System and Memory Interface Generator) used in many designs.

The board files will be copied into your version of Vivado's installation directory

a. Download the most recent Master Branch ZIP Archive (https://github.com/Digilent/vivado-boards/archive/master.zip) of Digilent's vivado-boards Github repository (https://github.com/Digilent/vivado-boards) and extract it.

b. Open the folder extracted from the archive and navigate to its new/board_files folder. You will be copying all of this folder's subfolders.

c. Open the folder that Vivado was installed into - e.g. C:/Xilinx/Vivado by default. Under this folder, navigate to its <version>/data/boards/board_files directory. If this folder doesn't exist, create it.
Copy all of the folders found in vivado-boards' new/board_files folder, then paste them into this folder.

Reference:
1. https://digilent.com/reference/programmable-logic/guides/installing-vivado-and-sdk
