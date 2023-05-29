#include <Servo.h>
Servo srv;
int echo = 9;
int trig = 8;
float d;
float t;
float distance() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  t = pulseIn(echo, HIGH);  //
  d = 0.034 * t / 2;        // ila bghiti bl milimetre 0.34
  return d;
}

void setup() {
  srv.attach(3);
  srv.write(0);
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
}
void loop() {


  Serial.println(distance());
  /*for (int i = 0 ; i < 180;i++){
    srv.write(i);
    delay(50);
  }*/
  delay(20);
  if (distance() <= 20) {
    srv.write(80);
    delay(100);
    srv.write(0);
    delay(100);
  }
}
