#include <AFMotor.h>
#include <SoftwareSerial.h>
SoftwareSerial bt(9, 10);
char c;

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);
void fo (){
  motor1.setSpeed( speed(100));
  motor1.run(FORWARD);
  motor2.setSpeed( speed(100));
  motor2.run(FORWARD);

  motor3.setSpeed( speed(100));
  motor3.run(FORWARD);
  motor4.setSpeed( speed(100));
  motor4.run(FORWARD);
}

void ba (){
  motor1.setSpeed( speed(100));
  motor1.run(BACKWARD);
  motor2.setSpeed( speed(100));
  motor2.run(BACKWARD);

  motor3.setSpeed( speed(100));
  motor3.run(BACKWARD);
  motor4.setSpeed( speed(100));
  motor4.run(BACKWARD);
}
void left (){
  motor1.setSpeed( speed(100));
  motor1.run(FORWARD);
  motor2.setSpeed( speed(100));
  motor2.run(FORWARD);

  motor3.setSpeed( speed(100));
  motor3.run(FORWARD);
  motor4.setSpeed( speed(0));
  motor4.run(FORWARD);
}
void right (){
  motor1.setSpeed( speed(0));
  motor1.run(FORWARD);
  motor2.setSpeed( speed(100));
  motor2.run(FORWARD);

  motor3.setSpeed( speed(100));
  motor3.run(FORWARD);
  motor4.setSpeed( speed(100));
  motor4.run(FORWARD);
}

void st (){
  motor1.setSpeed( speed(0));
  motor1.run(BACKWARD);
  motor2.setSpeed( speed(0));
  motor2.run(BACKWARD);

  motor3.setSpeed( speed(0));
  motor3.run(BACKWARD);
  motor4.setSpeed( speed(0));
  motor4.run(BACKWARD);
}


void setup() {
  // put your setup code here, to run once:
  bt.begin(9600);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
  
  

  if (bt.available()) {
    c = bt.read();
    Serial.write(bt.read());
    if (c == 'F') {
      fo();
    }
    if (c == 'B') {
      ba();
    }
    if (c == 'S') {
      st();
    }
    if (c == 'L') {
      left();
    }
     if (c == 'R') {
      right();
    }
  }
  



}
int speed(int percent){
  return map (percent, 0, 100, 0, 255);
}
