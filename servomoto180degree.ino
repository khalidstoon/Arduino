#include <Servo.h>
Servo srv;
void setup() {
  srv.attach(8);
  srv.write(0);
  //delay(3000);
  // put your setup code here, to run once:
}
void loop() {
  srv.write(180);
  delay(1000);
  srv.write(0);
  delay(1000);
 
}
