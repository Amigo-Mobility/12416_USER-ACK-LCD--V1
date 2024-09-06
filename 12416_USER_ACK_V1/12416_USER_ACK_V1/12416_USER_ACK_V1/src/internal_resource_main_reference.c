 /*****************************************************************************
  AUTO-GENERATED CODE:  Graphics Resource Converter version: 4.02.00

  Company:
      Microchip Technology, Inc.
 
  File Name:
     internal_resource_main_reference.c
 
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
 * SECTION:  Graphics Configuration: Bitmap Check
 *****************************************************************************/

#ifdef GFX_CONFIG_IMAGE_FLASH_DISABLE
#error The GFX_CONFIG_IMAGE_FLASH_DISABLE is defined in system_config.h header file.
#endif

#ifdef GFX_CONFIG_RLE_DECODE_DISABLE
#error The GFX_CONFIG_RLE_DECODE_DISABLE is defined in system_config.h header file.
#endif

/*****************************************************************************
 * SECTION:  Graphics Configuration: Font Check
 *****************************************************************************/

#ifdef GFX_CONFIG_FONT_FLASH_DISABLE
#error The GFX_CONFIG_FONT_FLASH_DISABLE is defined in system_config.h header file.
#endif

/*****************************************************************************
 * SECTION:  Graphics Configuration: Palette Check
 *****************************************************************************/

#ifdef GFX_CONFIG_PALETTE_DISABLE
#error The GFX_CONFIG_PALETTE_DISABLE is defined in gfx_config header file.
#endif




/*****************************************************************************
 * SECTION:  Palettes
 *****************************************************************************/




/*********************************
 * Bitmap Structure
 * Label: battery_8bit
 * Description:  40x17 pixels, 8-bits per pixel
 ***********************************/
#if defined (GFX_CONFIG_IMAGE_PACKED_ENABLE) && (__XC16_VERSION__ >= 1011)
extern uint8_gfx_image_prog __battery_8bit[] __attribute__((space(prog), section("grc_images")));
#else
extern uint8_gfx_image_prog __battery_8bit[] __attribute__((space(prog), section("grc_images"), aligned(2)));
#endif

const GFX_RESOURCE_HDR battery_8bit =
{
    .type = (GFX_RESOURCE_MEMORY_FLASH | GFX_RESOURCE_TYPE_MCHP_MBITMAP | GFX_RESOURCE_COMP_RLE),
    .ID = 0,
    .resource.image.location.progByteAddress = (uint8_gfx_image_prog *) __battery_8bit,
    .resource.image.width = 40,
    .resource.image.height = 17,
    .resource.image.parameter1.compressedSize = 803,
    .resource.image.parameter2.rawSize = 684,
    .resource.image.colorDepth = 8,
    .resource.image.type = 0x10,
    .resource.image.paletteID = 0x29CD
};

/*********************************
 * Bitmap Structure
 * Label: amigo_splash_8bit
 * Description:  320x240 pixels, 8-bits per pixel
 ***********************************/
#if defined (GFX_CONFIG_IMAGE_PACKED_ENABLE) && (__XC16_VERSION__ >= 1011)
extern uint8_gfx_image_prog __amigo_splash_8bit[] __attribute__((space(prog), section("grc_images")));
#else
extern uint8_gfx_image_prog __amigo_splash_8bit[] __attribute__((space(prog), section("grc_images"), aligned(2)));
#endif

const GFX_RESOURCE_HDR amigo_splash_8bit =
{
    .type = (GFX_RESOURCE_MEMORY_FLASH | GFX_RESOURCE_TYPE_MCHP_MBITMAP | GFX_RESOURCE_COMP_RLE),
    .ID = 0,
    .resource.image.location.progByteAddress = (uint8_gfx_image_prog *) __amigo_splash_8bit,
    .resource.image.width = 320,
    .resource.image.height = 240,
    .resource.image.parameter1.compressedSize = 4027,
    .resource.image.parameter2.rawSize = 76804,
    .resource.image.colorDepth = 8,
    .resource.image.type = 0x10,
    .resource.image.paletteID = 0x29CD
};

/*********************************
 * Bitmap Structure
 * Label: battery_blue
 * Description:  40x17 pixels, 8-bits per pixel
 ***********************************/
#if defined (GFX_CONFIG_IMAGE_PACKED_ENABLE) && (__XC16_VERSION__ >= 1011)
extern uint8_gfx_image_prog __battery_blue[] __attribute__((space(prog), section("grc_images")));
#else
extern uint8_gfx_image_prog __battery_blue[] __attribute__((space(prog), section("grc_images"), aligned(2)));
#endif

const GFX_RESOURCE_HDR battery_blue =
{
    .type = (GFX_RESOURCE_MEMORY_FLASH | GFX_RESOURCE_TYPE_MCHP_MBITMAP | GFX_RESOURCE_COMP_RLE),
    .ID = 0,
    .resource.image.location.progByteAddress = (uint8_gfx_image_prog *) __battery_blue,
    .resource.image.width = 40,
    .resource.image.height = 17,
    .resource.image.parameter1.compressedSize = 707,
    .resource.image.parameter2.rawSize = 684,
    .resource.image.colorDepth = 8,
    .resource.image.type = 0x10,
    .resource.image.paletteID = 0x29CD
};

/*********************************
 * Bitmap Structure
 * Label: gps
 * Description:  40x40 pixels, 8-bits per pixel
 ***********************************/
#if defined (GFX_CONFIG_IMAGE_PACKED_ENABLE) && (__XC16_VERSION__ >= 1011)
extern uint8_gfx_image_prog __gps[] __attribute__((space(prog), section("grc_images")));
#else
extern uint8_gfx_image_prog __gps[] __attribute__((space(prog), section("grc_images"), aligned(2)));
#endif

const GFX_RESOURCE_HDR gps =
{
    .type = (GFX_RESOURCE_MEMORY_FLASH | GFX_RESOURCE_TYPE_MCHP_MBITMAP | GFX_RESOURCE_COMP_RLE),
    .ID = 0,
    .resource.image.location.progByteAddress = (uint8_gfx_image_prog *) __gps,
    .resource.image.width = 40,
    .resource.image.height = 40,
    .resource.image.parameter1.compressedSize = 1106,
    .resource.image.parameter2.rawSize = 1604,
    .resource.image.colorDepth = 8,
    .resource.image.type = 0x10,
    .resource.image.paletteID = 0x29CD
};


/*********************************
 * Bitmap Structure
 * Label: ultrasonic
 * Description:  35x42 pixels, 8-bits per pixel
 ***********************************/
#if defined (GFX_CONFIG_IMAGE_PACKED_ENABLE) && (__XC16_VERSION__ >= 1011)
extern uint8_gfx_image_prog __ultrasonic[] __attribute__((space(prog), section("grc_images")));
#else
extern uint8_gfx_image_prog __ultrasonic[] __attribute__((space(prog), section("grc_images"), aligned(2)));
#endif

const GFX_RESOURCE_HDR ultrasonic =
{
    .type = (GFX_RESOURCE_MEMORY_FLASH | GFX_RESOURCE_TYPE_MCHP_MBITMAP | GFX_RESOURCE_COMP_RLE),
    .ID = 0,
    .resource.image.location.progByteAddress = (uint8_gfx_image_prog *) __ultrasonic,
    .resource.image.width = 35,
    .resource.image.height = 42,
    .resource.image.parameter1.compressedSize = 1178,
    .resource.image.parameter2.rawSize = 1984,
    .resource.image.colorDepth = 8,
    .resource.image.type = 0x10,
    .resource.image.paletteID = 0x29CD
};

/*********************************
 * Bitmap Structure
 * Label: smarttrack
 * Description:  40x40 pixels, 8-bits per pixel
 ***********************************/
#if defined (GFX_CONFIG_IMAGE_PACKED_ENABLE) && (__XC16_VERSION__ >= 1011)
extern uint8_gfx_image_prog __smarttrack[] __attribute__((space(prog), section("grc_images")));
#else
extern uint8_gfx_image_prog __smarttrack[] __attribute__((space(prog), section("grc_images"), aligned(2)));
#endif

const GFX_RESOURCE_HDR smarttrack =
{
    .type = (GFX_RESOURCE_MEMORY_FLASH | GFX_RESOURCE_TYPE_MCHP_MBITMAP | GFX_RESOURCE_COMP_RLE),
    .ID = 0,
    .resource.image.location.progByteAddress = (uint8_gfx_image_prog *) __smarttrack,
    .resource.image.width = 40,
    .resource.image.height = 40,
    .resource.image.parameter1.compressedSize = 984,
    .resource.image.parameter2.rawSize = 2116,
    .resource.image.colorDepth = 8,
    .resource.image.type = 0x00,
    .resource.image.paletteID = 0x0000
};


/*********************************
 * Bitmap Structure
 * Label: smartsensor
 * Description:  40x40 pixels, 8-bits per pixel
 ***********************************/
#if defined (GFX_CONFIG_IMAGE_PACKED_ENABLE) && (__XC16_VERSION__ >= 1011)
extern uint8_gfx_image_prog __smartsensor[] __attribute__((space(prog), section("grc_images")));
#else
extern uint8_gfx_image_prog __smartsensor[] __attribute__((space(prog), section("grc_images"), aligned(2)));
#endif

const GFX_RESOURCE_HDR smartsensor =
{
    .type = (GFX_RESOURCE_MEMORY_FLASH | GFX_RESOURCE_TYPE_MCHP_MBITMAP | GFX_RESOURCE_COMP_RLE),
    .ID = 0,
    .resource.image.location.progByteAddress = (uint8_gfx_image_prog *) __smartsensor,
    .resource.image.width = 40,
    .resource.image.height = 40,
    .resource.image.parameter1.compressedSize = 1015,
    .resource.image.parameter2.rawSize = 2116,
    .resource.image.colorDepth = 8,
    .resource.image.type = 0x00,
    .resource.image.paletteID = 0x0000
};
/*********************************
 * Bitmap Structure
 * Label: white
 * Description:  42x42 pixels, 8-bits per pixel
 ***********************************/
#if defined (GFX_CONFIG_IMAGE_PACKED_ENABLE) && (__XC16_VERSION__ >= 1011)
extern uint8_gfx_image_prog __white[] __attribute__((space(prog), section("grc_images")));
#else
extern uint8_gfx_image_prog __white[] __attribute__((space(prog), section("grc_images"), aligned(2)));
#endif

const GFX_RESOURCE_HDR white =
{
    .type = (GFX_RESOURCE_MEMORY_FLASH | GFX_RESOURCE_TYPE_MCHP_MBITMAP | GFX_RESOURCE_COMP_RLE),
    .ID = 0,
    .resource.image.location.progByteAddress = (uint8_gfx_image_prog *) __white,
    .resource.image.width = 42,
    .resource.image.height = 42,
    .resource.image.parameter1.compressedSize = 602,
    .resource.image.parameter2.rawSize = 2280,
    .resource.image.colorDepth = 8,
    .resource.image.type = 0x10,
    .resource.image.paletteID = 0x29CD
};


/*****************************************************************************
 * SECTION:  FONTS
 *****************************************************************************/

/*********************************
 * Installed Font Structure
 * Label: Arial_Bold_18
 * Description:  Height: 22 pixels, 1 bit per pixel, Range: ' ' to 'z'
 ***********************************/
#if defined(GFX_CONFIG_FONT_PROG_SPACE_ENABLE) && (__XC16_VERSION__ >= 1011)
#ifndef GFX_CONFIG_FONT_PACKED_ENABLE
extern GFX_FONT_SPACE char __Arial_Bold_18[] __attribute__((space(prog), section("grc_text"), aligned(2)));
#else
extern GFX_FONT_SPACE char __Arial_Bold_18[] __attribute__((space(prog), section("grc_text")));
#endif
#else
extern GFX_FONT_SPACE char __Arial_Bold_18[] __attribute__((aligned(2)));
#endif

const GFX_RESOURCE_HDR Arial_Bold_18 = 
{
    .type = (GFX_RESOURCE_MEMORY_FLASH | GFX_RESOURCE_TYPE_FONT | GFX_RESOURCE_COMP_NONE),
    .ID = 0x0000,
    .resource.font.location.progByteAddress = (GFX_FONT_SPACE char *) __Arial_Bold_18,
    .resource.font.header.fontID = 0,
    .resource.font.header.extendedGlyphEntry = 0,
    .resource.font.header.res1 = 0,
    .resource.font.header.bpp = 0,
    .resource.font.header.orientation = 0,
    .resource.font.header.res2 = 0,
    .resource.font.header.firstChar = 0x0020,
    .resource.font.header.lastChar = 0x007A,
    .resource.font.header.height = 0x0016,
};
/*********************************
 * Installed Font Structure
 * Label: Arial_10
 * Description:  Height: 13 pixels, 1 bit per pixel, Range: ' ' to ';'
 ***********************************/
#if defined(GFX_CONFIG_FONT_PROG_SPACE_ENABLE) && (__XC16_VERSION__ >= 1011)
#ifndef GFX_CONFIG_FONT_PACKED_ENABLE
extern GFX_FONT_SPACE char __Arial_10[] __attribute__((space(prog), section("grc_text"), aligned(2)));
#else
extern GFX_FONT_SPACE char __Arial_10[] __attribute__((space(prog), section("grc_text")));
#endif
#else
extern GFX_FONT_SPACE char __Arial_10[] __attribute__((aligned(2)));
#endif

const GFX_RESOURCE_HDR Arial_10 = 
{
    .type = (GFX_RESOURCE_MEMORY_FLASH | GFX_RESOURCE_TYPE_FONT | GFX_RESOURCE_COMP_NONE),
    .ID = 0x0000,
    .resource.font.location.progByteAddress = (GFX_FONT_SPACE char *) __Arial_10,
    .resource.font.header.fontID = 0,
    .resource.font.header.extendedGlyphEntry = 0,
    .resource.font.header.res1 = 0,
    .resource.font.header.bpp = 0,
    .resource.font.header.orientation = 0,
    .resource.font.header.res2 = 0,
    .resource.font.header.firstChar = 0x0020,
    .resource.font.header.lastChar = 0x003B,
    .resource.font.header.height = 0x000D,
};
/*********************************
 * Installed Font Structure
 * Label: Arial_Narrow_12
 * Description:  Height: 15 pixels, 1 bit per pixel, Range: ' ' to 'z'
 ***********************************/
#if defined(GFX_CONFIG_FONT_PROG_SPACE_ENABLE) && (__XC16_VERSION__ >= 1011)
#ifndef GFX_CONFIG_FONT_PACKED_ENABLE
extern GFX_FONT_SPACE char __Arial_Narrow_12[] __attribute__((space(prog), section("grc_text"), aligned(2)));
#else
extern GFX_FONT_SPACE char __Arial_Narrow_12[] __attribute__((space(prog), section("grc_text")));
#endif
#else
extern GFX_FONT_SPACE char __Arial_Narrow_12[] __attribute__((aligned(2)));
#endif

const GFX_RESOURCE_HDR Arial_Narrow_12 = 
{
    .type = (GFX_RESOURCE_MEMORY_FLASH | GFX_RESOURCE_TYPE_FONT | GFX_RESOURCE_COMP_NONE),
    .ID = 0x0000,
    .resource.font.location.progByteAddress = (GFX_FONT_SPACE char *) __Arial_Narrow_12,
    .resource.font.header.fontID = 0,
    .resource.font.header.extendedGlyphEntry = 0,
    .resource.font.header.res1 = 0,
    .resource.font.header.bpp = 0,
    .resource.font.header.orientation = 0,
    .resource.font.header.res2 = 0,
    .resource.font.header.firstChar = 0x0020,
    .resource.font.header.lastChar = 0x007A,
    .resource.font.header.height = 0x000F,
};
/*********************************
 * Installed Font Structure
 * Label: Arial_Bold_14
 * Description:  Height: 17 pixels, 1 bit per pixel, Range: ' ' to 'z'
 ***********************************/
#if defined(GFX_CONFIG_FONT_PROG_SPACE_ENABLE) && (__XC16_VERSION__ >= 1011)
#ifndef GFX_CONFIG_FONT_PACKED_ENABLE
extern GFX_FONT_SPACE char __Arial_Bold_14[] __attribute__((space(prog), section("grc_text"), aligned(2)));
#else
extern GFX_FONT_SPACE char __Arial_Bold_14[] __attribute__((space(prog), section("grc_text")));
#endif
#else
extern GFX_FONT_SPACE char __Arial_Bold_14[] __attribute__((aligned(2)));
#endif

const GFX_RESOURCE_HDR Arial_Bold_14 = 
{
    .type = (GFX_RESOURCE_MEMORY_FLASH | GFX_RESOURCE_TYPE_FONT | GFX_RESOURCE_COMP_NONE),
    .ID = 0x0000,
    .resource.font.location.progByteAddress = (GFX_FONT_SPACE char *) __Arial_Bold_14,
    .resource.font.header.fontID = 0,
    .resource.font.header.extendedGlyphEntry = 0,
    .resource.font.header.res1 = 0,
    .resource.font.header.bpp = 0,
    .resource.font.header.orientation = 0,
    .resource.font.header.res2 = 0,
    .resource.font.header.firstChar = 0x0020,
    .resource.font.header.lastChar = 0x007A,
    .resource.font.header.height = 0x0011,
};
/*********************************
 * Installed Font Structure
 * Label: Arial_Black_75
 * Description:  Height: 107 pixels, 1 bit per pixel, Range: '%' to '9'
 ***********************************/
#if defined(GFX_CONFIG_FONT_PROG_SPACE_ENABLE) && (__XC16_VERSION__ >= 1011)
#ifndef GFX_CONFIG_FONT_PACKED_ENABLE
extern GFX_FONT_SPACE char __Arial_Black_75[] __attribute__((space(prog), section("grc_text"), aligned(2)));
#else
extern GFX_FONT_SPACE char __Arial_Black_75[] __attribute__((space(prog), section("grc_text")));
#endif
#else
extern GFX_FONT_SPACE char __Arial_Black_75[] __attribute__((aligned(2)));
#endif

const GFX_RESOURCE_HDR Arial_Black_75 = 
{
    .type = (GFX_RESOURCE_MEMORY_FLASH | GFX_RESOURCE_TYPE_FONT | GFX_RESOURCE_COMP_NONE),
    .ID = 0x0000,
    .resource.font.location.progByteAddress = (GFX_FONT_SPACE char *) __Arial_Black_75,
    .resource.font.header.fontID = 0,
    .resource.font.header.extendedGlyphEntry = 0,
    .resource.font.header.res1 = 0,
    .resource.font.header.bpp = 0,
    .resource.font.header.orientation = 0,
    .resource.font.header.res2 = 0,
    .resource.font.header.firstChar = 0x0025,
    .resource.font.header.lastChar = 0x0039,
    .resource.font.header.height = 0x006B,
};
/*********************************
 * Installed Font Structure
 * Label: Arial_12
 * Description:  Height: 15 pixels, 1 bit per pixel, Range: ' ' to 'z'
 ***********************************/
#if defined(GFX_CONFIG_FONT_PROG_SPACE_ENABLE) && (__XC16_VERSION__ >= 1011)
#ifndef GFX_CONFIG_FONT_PACKED_ENABLE
extern GFX_FONT_SPACE char __Arial_12[] __attribute__((space(prog), section("grc_text"), aligned(2)));
#else
extern GFX_FONT_SPACE char __Arial_12[] __attribute__((space(prog), section("grc_text")));
#endif
#else
extern GFX_FONT_SPACE char __Arial_12[] __attribute__((aligned(2)));
#endif

const GFX_RESOURCE_HDR Arial_12 = 
{
    .type = (GFX_RESOURCE_MEMORY_FLASH | GFX_RESOURCE_TYPE_FONT | GFX_RESOURCE_COMP_NONE),
    .ID = 0x0000,
    .resource.font.location.progByteAddress = (GFX_FONT_SPACE char *) __Arial_12,
    .resource.font.header.fontID = 0,
    .resource.font.header.extendedGlyphEntry = 0,
    .resource.font.header.res1 = 0,
    .resource.font.header.bpp = 0,
    .resource.font.header.orientation = 0,
    .resource.font.header.res2 = 0,
    .resource.font.header.firstChar = 0x0020,
    .resource.font.header.lastChar = 0x007A,
    .resource.font.header.height = 0x000F,
};

/*********************************
 * Installed Font Structure
 * Label: Arial_Black_20
 * Description:  Height: 29 pixels, 1 bit per pixel, Range: '0' to 'z'
 ***********************************/
/*#if defined(GFX_CONFIG_FONT_PROG_SPACE_ENABLE) && (__XC16_VERSION__ >= 1011)
#ifndef GFX_CONFIG_FONT_PACKED_ENABLE
extern GFX_FONT_SPACE char __Arial_Black_20[] __attribute__((space(prog), section("grc_text"), aligned(2)));
#else
extern GFX_FONT_SPACE char __Arial_Black_20[] __attribute__((space(prog), section("grc_text")));
#endif
#else
extern GFX_FONT_SPACE char __Arial_Black_20[] __attribute__((aligned(2)));
#endif

const GFX_RESOURCE_HDR Arial_Black_20 = 
{
    .type = (GFX_RESOURCE_MEMORY_FLASH | GFX_RESOURCE_TYPE_FONT | GFX_RESOURCE_COMP_NONE),
    .ID = 0x0000,
    .resource.font.location.progByteAddress = (GFX_FONT_SPACE char *) __Arial_Black_20,
    .resource.font.header.fontID = 0,
    .resource.font.header.extendedGlyphEntry = 0,
    .resource.font.header.res1 = 0,
    .resource.font.header.bpp = 0,
    .resource.font.header.orientation = 0,
    .resource.font.header.res2 = 0,
    .resource.font.header.firstChar = 0x0030,
    .resource.font.header.lastChar = 0x007A,
    .resource.font.header.height = 0x001D,
};
*/

/*********************************
 * Installed Font Structure
 * Label: Arial_Bold_22
 * Description:  Height: 26 pixels, 1 bit per pixel, Range: '' to 'z'
 ***********************************/
#if defined(GFX_CONFIG_FONT_PROG_SPACE_ENABLE) && (__XC16_VERSION__ >= 1011)
#ifndef GFX_CONFIG_FONT_PACKED_ENABLE
extern GFX_FONT_SPACE char __Arial_Bold_22[] __attribute__((space(prog), section("grc_text"), aligned(2)));
#else
extern GFX_FONT_SPACE char __Arial_Bold_22[] __attribute__((space(prog), section("grc_text")));
#endif
#else
extern GFX_FONT_SPACE char __Arial_Bold_22[] __attribute__((aligned(2)));
#endif

const GFX_RESOURCE_HDR Arial_Bold_22 = 
{
    .type = (GFX_RESOURCE_MEMORY_FLASH | GFX_RESOURCE_TYPE_FONT | GFX_RESOURCE_COMP_NONE),
    .ID = 0x0000,
    .resource.font.location.progByteAddress = (GFX_FONT_SPACE char *) __Arial_Bold_22,
    .resource.font.header.fontID = 0,
    .resource.font.header.extendedGlyphEntry = 0,
    .resource.font.header.res1 = 0,
    .resource.font.header.bpp = 0,
    .resource.font.header.orientation = 0,
    .resource.font.header.res2 = 0,
    .resource.font.header.firstChar = 0x0020,
    .resource.font.header.lastChar = 0x007A,
    .resource.font.header.height = 0x001A,
};


/*****************************************************************************
 * SECTION:  Palettes
 *****************************************************************************/

/*********************************
 * PALETTE Structure
 * Label: CrayolaByHue
 * Description:  128 Colors
 ***********************************/
extern const GFX_PALETTE_ENTRY __CrayolaByHueData[];

const GFX_RESOURCE_HDR CrayolaByHue =
{
    .type = (GFX_RESOURCE_MEMORY_FLASH | GFX_RESOURCE_TYPE_PALETTE | GFX_RESOURCE_COMP_NONE),
    .ID = 0,
    .resource.palette.location.constByteAddress = (const GFX_PALETTE_ENTRY *) __CrayolaByHueData,
    .resource.palette.numberOfEntries = 128,
    .resource.palette.paletteID = 0x29CD
};
/**/


