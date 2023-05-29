float ok ;
float degree ;
void setup() {
   Serial.begin (9600); 
}
void loop() { 
  ok = analogRead(A4);
  degree = ok * 5 / 1023;
  Serial.println(degree/0.01);
  delay (1000);  // put your main code here, to run repeatedly:
}
