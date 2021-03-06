// ----------------------------------------------------------------------------
//     _____
//    *     *
//   *____   *____
//  * *===*   *==*
// *___*===*___**  AVNET Design Resource Center
//      *======*         www.em.avnet.com/drc
//       *====*    
// ----------------------------------------------------------------------------
// 
//  Created With Avnet Display Kit Image Converter V0.1.0 
//     Date: Tuesday, June 04, 2013 
//     Time: 1:49:50 PM 
// 
// Please direct any questions or issues to the MicroZed Community Forums:
//    http://www.microzed.org
// 
//  Disclaimer:
//     Avnet, Inc. makes no warranty for the use of this code or design.
//     This code is provided  "As Is". Avnet, Inc assumes no responsibility for
//     any errors, which may appear in this code, nor does it make a commitment
//     to update the information contained herein. Avnet, Inc specifically
//     disclaims any implied warranties of fitness for a particular purpose.
//                      Copyright(c) 2013 Avnet, Inc.
//                              All rights reserved.
// 
// ----------------------------------------------------------------------------
 
static unsigned long avnet_touch_target_height = 31;
static unsigned long avnet_touch_target_width = 31;
static unsigned long avnet_touch_target[] =
{
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00ffffff,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00ffffff,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00ffffff,  
    0x00000000,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00000000,  
    0x00ffffff,  
    0x00000000,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00000000,  
    0x00ffffff,  
    0x00000000,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00000000,  
    0x00ffffff,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x0022b14c,  
    0x0022b14c,  
    0x0022b14c,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00ffffff,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00ffffff,  
    0x00ffffff,  
    0x00ffffff,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00ffffff,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000,  
    0x00000000
};
