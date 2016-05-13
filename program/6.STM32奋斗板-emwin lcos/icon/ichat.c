/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*                                                                    *
* C-file generated by                                                *
*                                                                    *
*        Bitmap Converter for emWin V5.30.                           *
*        Compiled Jul  1 2015, 10:49:26                              *
*                                                                    *
*        (c) 1998 - 2015 Segger Microcontroller GmbH & Co. KG        *
*                                                                    *
**********************************************************************
*                                                                    *
* Source file: ichat                                                 *
* Dimensions:  20 * 20                                               *
* NumColors:   65536 colors + 8 bit alpha channel                    *
*                                                                    *
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

extern GUI_CONST_STORAGE GUI_BITMAP bmichat;

static GUI_CONST_STORAGE unsigned char _acichat[] = {
  0xFF,0xFF,0xFF, 0xFF,0xFF,0xFF, 0xFF,0xFF,0xFF, 0xFF,0xFF,0xFF, 0xFF,0xFF,0xFF, 0xFF,0xFF,0xFF, 0xFF,0xFF,0xFF, 0xFF,0xFF,0xFF, 0xFF,0xFF,0xFF, 0xFF,0xFF,0xFF, 0xFF,0xFF,0xFF, 0xFF,0xFF,0xFF, 0xFF,0xFF,0xFF, 0xFF,0xFF,0xFF, 0xFF,0xFF,0xFF, 
        0xFF,0xFF,0xFF, 0xFF,0xFF,0xFF, 0xFF,0xFF,0xFF, 0xFF,0xFF,0xFF, 0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF, 0xFF,0xFF,0xFF, 0xFF,0xF7,0x7C, 0xFF,0xF7,0x7C, 0xFF,0xF7,0x7C, 0xFF,0xF7,0x7C, 0xFD,0xF7,0x7C, 0xF1,0xF7,0x7C, 0xE6,0xF7,0x7C, 0xE1,0xF7,0x7C, 0xE2,0xF7,0x7C, 0xE6,0xF7,0x7C, 0xEF,0xF7,0x7C, 0xFB,0xF7,0x7C, 0xFF,0xF7,0x7C, 
        0xFF,0xF7,0x7C, 0xFF,0xF7,0x7C, 0xFF,0xF7,0x7C, 0xFF,0xFF,0xFF, 0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF, 0xFF,0xF7,0x7C, 0xFF,0xCB,0xE7, 0xFF,0xCB,0xE7, 0xFF,0xCB,0xE7, 0xD8,0xCB,0xE7, 0x85,0xCC,0x08, 0x46,0xD4,0xAB, 0x1D,0xDD,0x4E, 0x09,0xE5,0x8F, 0x0B,0xDD,0x8F, 0x1D,0xDD,0x4E, 0x3E,0xD4,0xCC, 0x77,0xCC,0x09, 0xC3,0xCB,0xE7, 
        0xFF,0xCB,0xE7, 0xFF,0xCB,0xE7, 0xFF,0xCB,0xE7, 0xFF,0xF7,0x7C, 0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF, 0xFF,0xF7,0x7C, 0xFF,0xCB,0xC7, 0xF6,0xE5,0xEE, 0x97,0xD4,0xAA, 0x16,0xDD,0x2D, 0x04,0xEE,0x72, 0x00,0xF6,0xD3, 0x00,0xF6,0xD2, 0x00,0xF6,0xD2, 0x00,0xF6,0xD2, 0x00,0xF6,0xD2, 0x00,0xF6,0xD3, 0x02,0xEE,0xB3, 0x11,0xE5,0x8F, 
        0x78,0xCC,0x29, 0xDC,0xDD,0x0B, 0xFF,0xCB,0xC7, 0xFF,0xF7,0x7C, 0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF, 0xFF,0xF7,0x7C, 0xFF,0xC3,0xA7, 0x8F,0xD4,0xAA, 0x0F,0xE5,0x8E, 0x00,0xF6,0xD2, 0x00,0xF6,0xB1, 0x00,0xF6,0xB0, 0x00,0xF6,0xB0, 0x00,0xF6,0xB0, 0x00,0xF6,0xB0, 0x00,0xF6,0xB0, 0x00,0xF6,0xB0, 0x00,0xF6,0xB0, 0x00,0xF6,0xD2, 
        0x00,0xE6,0x10, 0x49,0xCC,0x09, 0xF9,0xC3,0xA7, 0xFF,0xF7,0x7C, 0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF, 0xFF,0xF7,0x7C, 0xAB,0xC3,0xA7, 0x0B,0xDD,0x4D, 0x00,0xF6,0xB1, 0x00,0xF6,0x90, 0x00,0xF6,0x90, 0x00,0xF6,0x90, 0x00,0xF6,0x90, 0x00,0xF6,0x90, 0x00,0xF6,0x90, 0x00,0xF6,0x90, 0x00,0xF6,0x90, 0x00,0xF6,0x90, 0x00,0xF6,0x90, 
        0x00,0xF6,0xB1, 0x09,0xE5,0xAE, 0xA0,0xC3,0xA7, 0xFE,0xF7,0x7C, 0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF, 0xF6,0xF7,0x7C, 0x5B,0xCB,0xE8, 0x00,0xEE,0x2F, 0x00,0xEE,0x70, 0x00,0xEE,0x6F, 0x00,0xEE,0x6F, 0x00,0xEE,0x6F, 0x00,0xEE,0x6F, 0x00,0xEE,0x6F, 0x00,0xEE,0x6F, 0x00,0xEE,0x6F, 0x00,0xEE,0x6F, 0x00,0xEE,0x6F, 0x00,0xEE,0x6F, 
        0x00,0xEE,0x6F, 0x00,0xEE,0x50, 0x4D,0xCC,0x09, 0xF3,0xF7,0x7C, 0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF, 0xE7,0xF7,0x7C, 0x1D,0xD4,0x6A, 0x00,0xEE,0x4F, 0x00,0xEE,0x4F, 0x00,0xEE,0x4F, 0x00,0xEE,0x4F, 0x00,0xEE,0x4F, 0x00,0xEE,0x4F, 0x00,0xEE,0x4F, 0x00,0xEE,0x4F, 0x00,0xEE,0x4F, 0x00,0xEE,0x4F, 0x00,0xEE,0x4F, 0x00,0xEE,0x4F, 
        0x00,0xEE,0x4F, 0x00,0xEE,0x4F, 0x16,0xD4,0x8A, 0xE5,0xF7,0x7C, 0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF, 0xE0,0xF7,0x5C, 0x05,0xD4,0x8A, 0x00,0xEE,0x0E, 0x00,0xEE,0x0E, 0x00,0xEE,0x0E, 0x00,0xEE,0x0E, 0x00,0xEE,0x0E, 0x00,0xEE,0x0E, 0x00,0xEE,0x0E, 0x00,0xEE,0x0E, 0x00,0xEE,0x0E, 0x00,0xEE,0x0E, 0x00,0xEE,0x0E, 0x00,0xEE,0x0E, 
        0x00,0xEE,0x0E, 0x00,0xEE,0x0E, 0x03,0xD4,0x8A, 0xE0,0xF7,0x5C, 0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF, 0xE4,0xF7,0x5C, 0x12,0xCC,0x49, 0x00,0xE5,0xAD, 0x00,0xE5,0xAD, 0x00,0xE5,0xAD, 0x00,0xE5,0xAD, 0x00,0xE5,0xAD, 0x00,0xE5,0xAD, 0x00,0xE5,0xAD, 0x00,0xE5,0xAD, 0x00,0xE5,0xAD, 0x00,0xE5,0xAD, 0x00,0xE5,0xAD, 0x00,0xE5,0xAD, 
        0x00,0xE5,0xAD, 0x00,0xE5,0xAD, 0x0A,0xCC,0x6A, 0xE2,0xF7,0x5C, 0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF, 0xF8,0xF7,0x5C, 0x60,0xBB,0x67, 0x00,0xDD,0x4D, 0x00,0xE5,0x6D, 0x00,0xDD,0x6C, 0x00,0xDD,0x6C, 0x00,0xDD,0x6C, 0x00,0xDD,0x6C, 0x00,0xDD,0x6C, 0x00,0xDD,0x6C, 0x00,0xDD,0x6C, 0x00,0xDD,0x6C, 0x00,0xDD,0x6C, 0x00,0xDD,0x6C, 
        0x00,0xDD,0x6C, 0x00,0xDD,0x6D, 0x35,0xC3,0xC8, 0xED,0xF7,0x5C, 0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF, 0xFF,0xF7,0x5C, 0xC4,0xB2,0xE6, 0x1F,0xC3,0xC8, 0x00,0xDD,0x4D, 0x00,0xDD,0x4C, 0x00,0xDD,0x2B, 0x00,0xDD,0x2B, 0x00,0xDD,0x2B, 0x00,0xDD,0x2B, 0x00,0xDD,0x2B, 0x00,0xDD,0x2B, 0x00,0xDD,0x2B, 0x00,0xDD,0x2B, 0x00,0xDD,0x2C, 
        0x00,0xDD,0x4C, 0x02,0xDD,0x0C, 0x78,0xB3,0x06, 0xFB,0xF7,0x5C, 0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF, 0xFF,0xF7,0x5C, 0xFF,0xB2,0xC6, 0xBB,0xB2,0xC6, 0x20,0xBB,0x88, 0x00,0xDD,0x2C, 0x00,0xDD,0x0B, 0x00,0xDD,0x0B, 0x00,0xDD,0x0B, 0x00,0xDD,0x0B, 0x00,0xDD,0x0B, 0x00,0xDD,0x0B, 0x00,0xDD,0x0B, 0x00,0xDD,0x0B, 0x00,0xDD,0x2C, 
        0x00,0xDD,0x2C, 0x3B,0xBB,0x88, 0xE2,0xB2,0xC6, 0xFF,0xF7,0x5C, 0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF, 0xFF,0xF7,0x5C, 0xF4,0xAA,0xA5, 0xB2,0xB2,0xC6, 0x20,0xC3,0xC9, 0x00,0xDD,0x2C, 0x00,0xD4,0xCB, 0x00,0xD5,0x0C, 0x00,0xDD,0x2C, 0x00,0xDD,0x2C, 0x00,0xDD,0x2C, 0x00,0xDD,0x2C, 0x00,0xDD,0x2C, 0x00,0xDD,0x0C, 0x0F,0xCC,0x8B, 
        0x52,0xB3,0x07, 0xD7,0xB2,0xC6, 0xFF,0xAA,0xA5, 0xFF,0xF7,0x5C, 0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF, 0xFA,0xF7,0x5C, 0x8C,0xB2,0xC6, 0x17,0xC3,0xE9, 0x00,0xDD,0x4D, 0x00,0xCC,0x6A, 0x4A,0xB2,0xE6, 0x76,0xB2,0xE6, 0x2C,0xBB,0x88, 0x0B,0xC3,0xC9, 0x00,0xC3,0xE9, 0x17,0xC3,0xA8, 0x35,0xBB,0x68, 0x71,0xB2,0xE6, 0xB1,0xAA,0xA5, 
        0xF2,0xAA,0xA5, 0xFF,0xAA,0xA5, 0xFF,0xAA,0xA5, 0xFF,0xF7,0x5C, 0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF, 0xFF,0xF7,0x5C, 0xE4,0xAA,0x85, 0x85,0x71,0xC3, 0x65,0x8A,0x87, 0xAE,0x9B,0x09, 0xF4,0x9B,0x09, 0xFE,0x9B,0x09, 0xFE,0x9B,0x09, 0xFE,0x9B,0x09, 0xFE,0x9B,0x09, 0xFE,0x9B,0x09, 0xFE,0x9B,0x09, 0xFE,0x9B,0x09, 0xFF,0x7A,0x25, 
        0xFF,0x82,0x04, 0xFF,0xAA,0x85, 0xFF,0xAA,0x85, 0xFF,0xF7,0x5C, 0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF, 0xFF,0xE7,0x1B, 0xFE,0x62,0x68, 0xF9,0x4A,0x69, 0xF2,0x52,0xAA, 0xED,0x63,0x0C, 0xEC,0x63,0x0C, 0xEC,0x63,0x0C, 0xEB,0x63,0x0C, 0xEB,0x63,0x0C, 0xEB,0x63,0x0C, 0xEC,0x63,0x0C, 0xEC,0x63,0x0C, 0xED,0x63,0x0C, 0xF1,0x4A,0x69, 
        0xF9,0x4A,0x28, 0xFE,0x49,0x84, 0xFF,0xA2,0x65, 0xFF,0xF7,0x5C, 0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF, 0xFF,0xEF,0x7D, 0xFA,0x6B,0x4D, 0xE5,0x5A,0xCB, 0xC9,0x5A,0xAB, 0xB5,0x5A,0xCB, 0xB0,0x5A,0xCB, 0xAD,0x5A,0xCB, 0xAA,0x5A,0xCB, 0xAA,0x5A,0xCB, 0xAA,0x5A,0xCB, 0xAC,0x5A,0xCB, 0xB1,0x5A,0xCB, 0xB6,0x5A,0xCB, 0xC7,0x5A,0xCB, 
        0xE7,0x5A,0xAB, 0xF9,0x42,0x28, 0xFF,0x51,0x43, 0xFF,0xF7,0x5C, 0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF, 0xFF,0xE7,0x5C, 0xFB,0x63,0x2C, 0xED,0x5A,0xCB, 0xD9,0x52,0xAA, 0xCC,0x5A,0xCB, 0xC6,0x5A,0xCB, 0xBF,0x5A,0xAB, 0xBA,0x5A,0xCB, 0xB9,0x5A,0xAB, 0xB9,0x5A,0xCB, 0xBE,0x5A,0xCB, 0xC7,0x5A,0xAB, 0xCD,0x5A,0xCB, 0xD8,0x5A,0xAB, 
        0xEE,0x52,0xAA, 0xFB,0x39,0xA7, 0xFF,0x7B,0xAE, 0xFF,0xFF,0xDF, 0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF, 0xFF,0xDE,0xFB, 0xFF,0x18,0xC3, 0xFC,0x29,0x25, 0xF9,0x52,0x8A, 0xF7,0x73,0x8E, 0xF6,0x5A,0xCB, 0xF3,0x52,0xAA, 0xF1,0x5A,0xEB, 0xF0,0x52,0xAA, 0xF0,0x5A,0xCB, 0xF3,0x6B,0x4D, 0xF6,0x63,0x0C, 0xF7,0x73,0x8E, 0xFA,0x41,0xE8, 
        0xFD,0x20,0xE4, 0xFF,0x08,0x41, 0xFF,0x84,0x10, 0xFF,0xFF,0xFF, 0xFF,0xFF,0xFF
};

GUI_CONST_STORAGE GUI_BITMAP bmichat = {
  20, // xSize
  20, // ySize
  60, // BytesPerLine
  24, // BitsPerPixel
  (unsigned char *)_acichat,  // Pointer to picture data
  NULL,  // Pointer to palette
  GUI_DRAW_BMPA565
};

/*************************** End of file ****************************/
