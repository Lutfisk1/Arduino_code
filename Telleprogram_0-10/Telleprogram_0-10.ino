
void setup (){
  Serial.begin(9600);
  
void loop
  int potVal = analogRead(3);
  potVal = map(potval, 0, 1023, 0 255);
  analogWrite(6, potVal);

  // 0 --> 1023
  // 0 --> 255

  voltage = map(potValue, 0, 255, 0, 5);
  Serial.println (potVal);
  Serial.println ("  ");
  Serial.println(voltage);

  //test tehhydfet4w