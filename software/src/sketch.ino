#include "config.h"
#include "lcd.h"
#include "pump.h"

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
    lcd.begin(16, 4);
    lcd.print("Status: ");                            // set cursor at (8, 0) to edit
    lcd.setCursor(0, 1); lcd.print("Moisture: ");     // set cursor at (10, 1) to edit
    lcd.setCursor(0, 2); lcd.print("Temperature: ");  // set cursor at (13, 2) to edit
    lcd.setCursor(0, 3); lcd.print("Water Level: ");  // set cursor at (13, 3) to edit

    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
}

void setup() {
    pinMode(SIGNAL_PIN, OUTPUT);
}
