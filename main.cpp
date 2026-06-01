#include <Arduino.h>

#include <U8g2lib.h>

#define OLED_CLK  22  
#define OLED_SDA  21
// 构造对象
U8G2_SSD1306_128X64_NONAME_F_SW_I2C OLED(U8G2_R0, OLED_CLK, OLED_SDA, U8X8_PIN_NONE);

void setup() {
  OLED.begin();
  OLED.enableUTF8Print();
  OLED.setFont(u8g2_font_wqy12_t_gb2312);
}

void loop() {
 
  OLED.clearBuffer();
  OLED.setCursor(0, 10);
  OLED.print("Can you feel my world");

  OLED.setCursor(0, 30);
  OLED.print("真实的我没办法伪造");

  OLED.sendBuffer();

  delay(1000);
>>>>>>> b2de2fe (首次提交)
}