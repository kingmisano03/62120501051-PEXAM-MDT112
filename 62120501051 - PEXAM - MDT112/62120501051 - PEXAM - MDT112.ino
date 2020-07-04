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

//#include <Wire.h>
//#include <LiquidCrystal_I2C.h>
//LiquidCrystal_I2C lcd(0x27, 16, 2);
//int MotorPin2 = 2;
//int MotorPin3 = 3;
//void setup()
//{
    //pinMode(MotorPin2, OUTPUT);
    //pinMode(MotorPin3, OUTPUT);
    //Serial.begin(9600);
    //lcd.begin();
    //lcd.backlight();
    //lcd.setCursor(2, 1); 
    //lcd.print("Turn CCW"); 
    //delay(2000);
//}
//void loop()
//{
  //digitalWrite(MotorPin2, LOW); 
  //digitalWrite(MotorPin3, HIGH); 
  //Serial.println("Motor left");
  //delay(2000);
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
//#include <Wire.h>
//#include <LiquidCrystal_I2C.h>
//LiquidCrystal_I2C lcd(0x27, 16, 2);
//int MotorPin2 = 2;
//int MotorPin3 = 3;
//void setup()
//{
    //pinMode(MotorPin2, OUTPUT);
    //pinMode(MotorPin3, OUTPUT);
    //Serial.begin(9600);
    //lcd.begin();
    //lcd.backlight();
    //lcd.setCursor(2, 1); 
    //lcd.print("Turn CCW"); 
    //delay(3000);
//}
//void loop()
//{
  //digitalWrite(MotorPin2, HIGH); 
  //digitalWrite(MotorPin3, LOW); 
  //Serial.println("Motor HIGHT");
  //delay(3000);
//}

//LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 

//void setup() {
  //lcd.begin(16, 2); // จอกว้าง 16 ตัวอักษร 2 บรรทัด
  //lcd.print(" Hello MDT "); 
  //lcd.setCursor(0, 1); // เลื่อนเคเซอร์ไปบรรทัดที่ 2 ลำดับที่ 0 (ก่อนหน้าตัวอักษรแรก)
  //delay(1000); // หน่วงเวลา 1 วินาที
  //lcd.clear(); // ล้างหน้าจอ
//}

//void loop() 
//{
  //lcd.setCursor(0, 0);
  //lcd.print(" Hello MDT");
  //lcd.setCursor(0, 1);
  //lcd.print(" void loop(){ ");
  //lcd.clear(); // ล้างหน้าจอ
//}

//const int buzzer = 9;
//LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 
//void setup() {
  //pinMode(buzzer, OUTPUT);
  //lcd.begin(16, 2); // จอกว้าง 16 ตัวอักษร 2 บรรทัด
  //lcd.print(" Hello MDT "); 
  //lcd.setCursor(0, 1); // เลื่อนเคเซอร์ไปบรรทัดที่ 2 ลำดับที่ 0 (ก่อนหน้าตัวอักษรแรก)
  //delay(1000); // หน่วงเวลา 1 วินาที
  //lcd.clear(); // ล้างหน้าจอ
//}
//void loop() 
//{
  //lcd.setCursor(0, 0);
  //lcd.print(" Hello MDT");
  //lcd.setCursor(0, 1);
  //lcd.print(" void loop(){ ");
  //lcd.clear(); // ล้างหน้าจอ
  //delay(200);
  //tone(buzzer, 800); 
  //delay(500);        
  //noTone(buzzer);     
 //}


//#include <Bounce2.h>
//#define NUM_BUTTONS 1
//int MotorPin2 = 2;
//int MotorPin3 = 3;
//void setup() 
//{
  //for (int i = 0; i < NUM_BUTTONS; i++) {
  //buttons[i].attach( BUTTON_PINS[i] , INPUT_PULLUP );
  //pinMode(MotorPin2, OUTPUT);
  //pinMode(MotorPin3, OUTPUT);
  //Serial.begin(9600);
  //buttons[i].interval(50);  
//}
//void loop() 
//{
  //for (int i = 0; i < NUM_BUTTONS; i++)  {
  //buttons[i].update();
  //bool button_state = buttons[i].read();
  //if(last_button_state > button_state) {
  //Serial.println("Falling edge");
  //digitalWrite(MotorPin2, HIGH);
  //digitalWrite(MotorPin3, LOW);
  //for (int x = 0; x < 100; x+20) {
 //}
  //last_button_state = button_state;
//}


#include <Bounce2.h>
#define NUM_BUTTONS 1
int MotorPin2 = 2;
int MotorPin3 = 3;
void setup() 
{
  for (int i = 0; i < NUM_BUTTONS; i++) {
  buttons[i].attach( BUTTON_PINS[i] , INPUT_PULLUP );
  pinMode(MotorPin2, OUTPUT);
  pinMode(MotorPin3, OUTPUT);
  Serial.begin(9600);
  buttons[i].interval(50);  
}
void loop() 
{
  for (int i = 0; i < NUM_BUTTONS; i++)  {
  buttons[i].update();
  bool button_state = buttons[i].read();
  if(last_button_state > button_state) {
  Serial.println("Falling edge");
  digitalWrite(MotorPin2, HIGH);
  digitalWrite(MotorPin3, LOW);
  for (int x = 0; x < 100; x+20) {
  digitalWrite(MotorPin2, LOW);
  digitalWrite(MotorPin3, HIGH);
  for (int x = 0; x < 100; x+20) {
 }
  last_button_state = button_state;
}
