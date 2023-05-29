int pirpin = A5;
int okk;
int relay = 8;
void setup() {
  // put your setup code here, to run once:
  pinMode (relay,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  okk = analogRead(pirpin);
  Serial.println(okk);
  delay(1000);
  if (okk <= 500) {
    Serial.println("good");
    digitalWrite(relay,HIGH);
    delay(1000);
  }
  else{
    digitalWrite(relay,LOW);
  }
}
