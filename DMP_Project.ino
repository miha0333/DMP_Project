#include <LiquidCrystal.h>

// LCD WITH BUTTONS
// LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

// LCD WITHOUT BUTTONS
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

//Custom Characters LCD
byte topHalfChar[8] = {
  0b10000,
  0b11000,
  0b11000,
  0b01100,
  0b01100,
  0b00110,
  0b00110,
  0b00011
};

byte bottomHalfChar[8] = {
  0b00011,
  0b00110,
  0b00110,
  0b01100,
  0b01100,
  0b11000,
  0b11000,
  0b10000  
};


void setup() 
{
  lcd.createChar(0, topHalfChar);
  lcd.createChar(1, bottomHalfChar);
}


void loop() {
 
}

void displayDistace(int dist)
{
    lcd.setCursor(0, 0);
    for(int i = 0; i < dist; i++)
    {
        lcd.write(byte(0));
    }
    lcd.setCursor(0, 1);
    for(int i = 0; i < dist; i++)
    {
        lcd.write(byte(1));
    }
}