
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
//  Serial.print(analogRead(0));
//  Serial.print(" ");
//  Serial.print(analogRead(1));
//  Serial.print(" "); 
//  Serial.print(analogRead(2));
//  Serial.print(" ");
//  Serial.print(analogRead(3));
//  Serial.println(" ");
  Serial.write(255);
  int val[4];
  for (int i = 0; i < 4;i++) {
    val[i] = analogRead(i);
    Serial.write(val[i]>>3);    // send 7 MSB as serial data
    Serial.write(val[i]&7);
  }
  delay(10);
}
