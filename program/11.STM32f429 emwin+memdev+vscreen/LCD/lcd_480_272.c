#include "lcd_480_272.h"

//lcd frame buffer
u32 FrameBuffer[544][480]  __attribute__(( at(0xD0000000) ));

void LCD_Config(void)
{
  /* Initialise the LCD */
  LCD__Init();
  
  /* Initialise the LCD Layers */
  LCD_LayerInit();
  
  /* Set the Foreground as active Layer */
//  LCD_SetLayer(LCD_FOREGROUND_LAYER);

//  LCD_SetTransparency(0);
//  
//  /* Set the Background as active Layer */
//  LCD_SetLayer(LCD_BACKGROUND_LAYER); 
//  
//  /* Configure the window size and position */
//  LCD_SetDisplayWindow(0, 0, 272, 480);

  /* Configure the LCD Pixel Format */
  //LCD_SetPixelFormat(LTDC_Pixelformat_ARGB8888);
  
  /* Configure the LCD frame Buffer Address */
  LCD_SetAddress((uint32_t)FrameBuffer);
  
  LCD_DisplayOn();
}  