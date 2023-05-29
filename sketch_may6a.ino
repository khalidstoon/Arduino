float ok ;
void setup() {
   Serial.begin (9600);
   pinMode (13,OUTPUT);
}
void loop() { 
  ok = analogRead(A5);
  Serial.println(ok);
  if (ok <= 650 ){
digitalWrite (13,LOW);
  }
  if (ok >= 660){
    digitalWrite (13,HIGH);
  }
  // put your main code here, to run repeatedly:
}
