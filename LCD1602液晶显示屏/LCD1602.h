#ifndef __LCD1602_H__
#define __LCD1602_H__

void LCD_WriteCommand(unsigned char Command);
void LCD_WriteData(unsigned char Data);
void LCD_Init(void);
void LCD_ShowChar(unsigned char Line,unsigned char Column,unsigned char Char);
void LCD_ShowString(unsigned char Line,unsigned char Column,unsigned char *String);
void LCD_SetCursor(unsigned char Line,unsigned char Column);
int LCD_Pow(int X,int Y);
void LCD_ShowNum(unsigned char Line,unsigned char Column,unsigned int Number,unsigned char Length);
void LCD_ShowSignedNum(unsigned char Line,unsigned char Column,int Number,unsigned char Length);
void LCD_ShowHexNum(unsigned char Line,unsigned char Column,unsigned int Number,unsigned char Length);
void LCD_ShowBinNum(unsigned char Line,unsigned char Column,unsigned int Number,unsigned char Length);
#endif
