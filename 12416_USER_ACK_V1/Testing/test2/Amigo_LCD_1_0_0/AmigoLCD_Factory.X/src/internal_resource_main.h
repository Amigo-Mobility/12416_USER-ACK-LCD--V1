/*****************************************************************************
  AUTO-GENERATED CODE:  Graphics Resource Converter version: 4.02.00

  Company:
      Microchip Technology, Inc.
 
  File Name:
     internal_resource_main.h
 
  Summary:
      This file is generated by the Microchip's Graphics Resource Converter.
  Description:
      This file is generated by the Graphics Resource Converter containing
      resources such as images and fonts that can be used by Microchip's
      Graphics Library, which is part of the MLA.
 *****************************************************************************/

// DOM-IGNORE-BEGIN
/*****************************************************************************
  Software License Agreement

  Copyright(c) 2013 Microchip Technology Inc.  All rights reserved.
  Microchip licenses to you the right to use, modify, copy and distribute
  Software only when embedded on a Microchip microcontroller or digital
  signal controller that is integrated into your product or third party
  product (pursuant to the sublicense terms in the accompanying license
  agreement).
 
  You should refer to the license agreement accompanying this Software
  for additional information regarding your rights and obligations.
 
  SOFTWARE AND DOCUMENTATION ARE PROVIDED �AS IS� WITHOUT WARRANTY OF ANY
  KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY
  OF MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR
  PURPOSE. IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR
  OBLIGATED UNDER CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION,
  BREACH OF WARRANTY, OR OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT
  DAMAGES OR EXPENSES INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL,
  INDIRECT, PUNITIVE OR CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA,
  COST OF PROCUREMENT OF SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY
  CLAIMS BY THIRD PARTIES (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF),
  OR OTHER SIMILAR COSTS.
 *****************************************************************************/
// DOM-IGNORE-END

#ifndef INTERNAL_RESOURCE_MAIN_H_FILE
#define INTERNAL_RESOURCE_MAIN_H_FILE
/*****************************************************************************
 * SECTION:  Includes
 *****************************************************************************/
#include <gfx/gfx.h>
#include <stdint.h>

/*****************************************************************************
 * SECTION:  Graphics Library Format Check
 *****************************************************************************/
#ifndef GFX_RESOURCE_FORMAT_VERSION
    #if(GRAPHICS_LIBRARY_VERSION != 0x0401)
    #warning "It is suggested to use Graphics Library version 4.01 or later with this version of GRC."
    #endif
#elif(GFX_RESOURCE_FORMAT_VERSION != 0x0101)
#warning "It is suggested to use Graphics Library with the resource format version 1.01 with this version of GRC."
#endif



/*****************************************************************************
 * SECTION: Graphics Configuration
 * Overview:    This defines the size of the buffer used by font functions
 *              to retrieve font data from the external memory. The buffer
 *              size can be increased to accommodate large font sizes.
 *              The user must be aware of the expected glyph sizes of the 
 *              characters stored in the font table. 
 *              To modify the size used, declare this macro in the 
 *              system_config.h file with the desired size.
 *
 * #define GFX_EXTERNAL_FONT_RASTER_BUFFER_SIZE     (1070)
 *****************************************************************************/

/*****************************************************************************
 * This is an error check for the color depth
 *****************************************************************************/
#if (GFX_CONFIG_COLOR_DEPTH > 16)
#error "Color Depth needs to be 16 to correctly use these resources"
#endif



/*****************************************************************************
 * SECTION:  BITMAPS
 *****************************************************************************/

/*********************************
 * Bitmap Structure
 * Label: amigo_splash_8bit
 * Description:  320x240 pixels, 8-bits per pixel
 ***********************************/
extern const GFX_RESOURCE_HDR amigo_splash_8bit;
#define amigo_splash_8bit_WIDTH     (320)
#define amigo_splash_8bit_HEIGHT    (240)
#define amigo_splash_8bit_SIZE      (77318)
/*********************************
 * Bitmap Structure
 * Label: amigo_tiny_logo
 * Description:  40x30 pixels, 8-bits per pixel
 ***********************************/
extern const GFX_RESOURCE_HDR amigo_tiny_logo;
#define amigo_tiny_logo_WIDTH     (40)
#define amigo_tiny_logo_HEIGHT    (30)
#define amigo_tiny_logo_SIZE      (1718)
/*********************************
 * Bitmap Structure
 * Label: battery_8bit
 * Description:  40x17 pixels, 8-bits per pixel
 ***********************************/
extern const GFX_RESOURCE_HDR battery_8bit;
#define battery_8bit_WIDTH     (40)
#define battery_8bit_HEIGHT    (17)
#define battery_8bit_SIZE      (1198)
/*********************************
 * Bitmap Structure
 * Label: stop_8bit
 * Description:  54x50 pixels, 8-bits per pixel
 ***********************************/
extern const GFX_RESOURCE_HDR stop_8bit;
#define stop_8bit_WIDTH     (54)
#define stop_8bit_HEIGHT    (50)
#define stop_8bit_SIZE      (3218)
/*********************************
 * Bitmap Structure
 * Label: batt2_empty
 * Description:  40x60 pixels, 8-bits per pixel
 ***********************************/
extern const GFX_RESOURCE_HDR batt2_empty;
#define batt2_empty_WIDTH     (40)
#define batt2_empty_HEIGHT    (60)
#define batt2_empty_SIZE      (2918)
/*********************************
 * Bitmap Structure
 * Label: batt2_empty_blue
 * Description:  40x60 pixels, 8-bits per pixel
 ***********************************/
extern const GFX_RESOURCE_HDR batt2_empty_blue;
#define batt2_empty_blue_WIDTH     (40)
#define batt2_empty_blue_HEIGHT    (60)
#define batt2_empty_blue_SIZE      (2918)
/*********************************
 * Bitmap Structure
 * Label: arrow_8bpp
 * Description:  18x13 pixels, 8-bits per pixel
 ***********************************/
extern const GFX_RESOURCE_HDR arrow_8bpp;
#define arrow_8bpp_WIDTH     (18)
#define arrow_8bpp_HEIGHT    (13)
#define arrow_8bpp_SIZE      (752)
/*****************************************************************************
 * SECTION:  Fonts
 *****************************************************************************/

/*********************************
 * Installed Font Structure
 * Label: Arial_Bold_18
 * Description:  Height: 22 pixels, 1 bit per pixel, Range: ' ' to 'z'
 ***********************************/
extern const GFX_RESOURCE_HDR Arial_Bold_18;
#define Arial_Bold_18_SIZE    (3958)
/*********************************
 * Installed Font Structure
 * Label: Arial_10
 * Description:  Height: 13 pixels, 1 bit per pixel, Range: ' ' to ';'
 ***********************************/
extern const GFX_RESOURCE_HDR Arial_10;
#define Arial_10_SIZE    (497)
/*********************************
 * Installed Font Structure
 * Label: Arial_Narrow_12
 * Description:  Height: 15 pixels, 1 bit per pixel, Range: ' ' to 'z'
 ***********************************/
extern const GFX_RESOURCE_HDR Arial_Narrow_12;
#define Arial_Narrow_12_SIZE    (1797)
/*********************************
 * Installed Font Structure
 * Label: Arial_Bold_14
 * Description:  Height: 17 pixels, 1 bit per pixel, Range: ' ' to 'z'
 ***********************************/
extern const GFX_RESOURCE_HDR Arial_Bold_14;
#define Arial_Bold_14_SIZE    (2565)
/*********************************
 * Installed Font Structure
 * Label: Arial_Black_75
 * Description:  Height: 107 pixels, 1 bit per pixel, Range: '%' to '9'
 ***********************************/
extern const GFX_RESOURCE_HDR Arial_Black_75;
#define Arial_Black_75_SIZE    (13788)
/*****************************************************************************
 * SECTION:  Palettes
 *****************************************************************************/

/*********************************
 * PALETTE Structure
 * Label: CrayolaByHue
 * Description:  128 Colors
 ***********************************/
extern const GFX_RESOURCE_HDR CrayolaByHue;
#define CrayolaByHue_SIZE    (256)
#endif

