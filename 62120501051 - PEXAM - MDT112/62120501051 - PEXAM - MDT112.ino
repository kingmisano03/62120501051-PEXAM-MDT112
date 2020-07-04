const int buzzer = 9;
void setup() {
    pinMode(buzzer, OUTPUT);
void loop() 
{
  tone(buzzer, 800); 
  delay(400);        
  noTone(buzzer);     
 }