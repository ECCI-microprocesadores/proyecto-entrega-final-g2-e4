#ifndef I2C_LCD_H
#define I2C_LCD_H

void lcd_init(void);
void lcd_cmd(unsigned char cmd);
void lcd_write_char(char c);
void lcd_set_cursor(unsigned char row, unsigned char col);
void lcd_write_string(const char *str);
void lcd_clear(void);

#endif
