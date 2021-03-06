# ----------------------------------------------------------------------------
#       _____
#      *     *
#     *____   *____
#    * *===*   *==*
#   *___*===*___**  AVNET
#        *======*
#         *====*
# ----------------------------------------------------------------------------
# 
#  This design is the property of Avnet.  Publication of this
#  design is not authorized without written consent from Avnet.
# 
#  Please direct any questions to the UltraZed community support forum:
#     http://www.ultrazed.org/forum
# 
#  Product information is available at:
#     http://www.ultrazed.org/product/ultrazed
# 
#  Disclaimer:
#     Avnet, Inc. makes no warranty for the use of this code or design.
#     This code is provided  "As Is". Avnet, Inc assumes no responsibility for
#     any errors, which may appear in this code, nor does it make a commitment
#     to update the information contained herein. Avnet, Inc specifically
#     disclaims any implied warranties of fitness for a particular purpose.
#                      Copyright(c) 2016 Avnet, Inc.
#                              All rights reserved.
# 
# ----------------------------------------------------------------------------
# 
#  Create Date:         Dec 21, 2016
#  Design Name:         UltraZed + PCIe Carrier
#  Module Name:         make_uz_pciec_factest.tcl
#  Project Name:        UltraZed PCIe Carrier HW Factory Acceptance Test
#  Target Devices:      Xilinx Zynq UltraScale+ 3EG
#  Hardware Boards:     UltraZed + PCIe Carrier
# 
#  Tool versions:       Xilinx Vivado 2016.2
# 
#  Description:         Build Script for UltraZed HW Factory Acceptance 
#                       Test design
# 
#  Dependencies:        make.tcl
#
#  Revision:            Dec 21, 2016: 1.00 Initial version
# 
# ----------------------------------------------------------------------------

# Build HW Factory Acceptance Test design
# for UltraZed PCIe Carrier + UltraZed-3EG SOM
set argv [list board=UZ3EG_PCIEC project=uz_pciec_factest sdk=no version_override=yes]
set argc [llength $argv]
source ./make.tcl -notrace
