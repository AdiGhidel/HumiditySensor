#include <Arduino.h>
#include <Wire.h>
#include <U8g2lib.h>

U8G2_SSD1306_128X64_NONAME_F_SW_I2C
u8g2(U8G2_R0,/*clock*/ 14,/*data*/ 12, U8X8_PIN_NONE);

void setup() {
  // put your setup code here, to run once:
  u8g2.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
 u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_9x15B_mr);
  u8g2.drawStr(0,5, "Hello, fa!");
  u8g2.sendBuffer();
  delay(100);
}
