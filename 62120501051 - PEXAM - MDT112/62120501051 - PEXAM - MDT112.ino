//const int buzzer = 9;
//void setup() {
//pinMode(buzzer, OUTPUT);
//void loop() 
//{
//tone(buzzer, 800); 
//delay(400);        
//noTone(buzzer);     
 //}

//#include <Wire.h>
//#include <LiquidCrystal_I2C.h>
//LiquidCrystal_I2C lcd(0x27, 16, 2);
//void setup()
//{
  //lcd.begin();
  //lcd.backlight();
  //lcd.setCursor(2, 1); 
  //lcd.print("Hello MDT"); 
//}
//void loop() 
//{
  //lcd.setCursor(0, 0);
  //lcd.print(" Hello MDT");
  //lcd.setCursor(0, 1);
  //lcd.print(" void loop(){ ");
  //lcd.clear(); // ล้างหน้าจอ
//}

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
int MotorPin2 = 2;
int MotorPin3 = 3;
void setup()
{
    pinMode(MotorPin2, OUTPUT);
    pinMode(MotorPin3, OUTPUT);
    Serial.begin(9600);
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(2, 1); 
    lcd.print("Turn CCW"); 
    delay(2000);
}
void loop()
{
  digitalWrite(MotorPin2, LOW); 
  digitalWrite(MotorPin3, HIGH); 
  Serial.println("Motor left");
  delay(2000);
}