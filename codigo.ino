void setup()
  
{
  
  Serial.begin(9600);
  
}



void loop()
  
{
  
long tecladoA5 = 0;
tecladoA5 = analogRead(A5);
Serial.println(tecladoA5);
delay(100);
