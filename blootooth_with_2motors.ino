#include <SoftwareSerial.h>

SoftwareSerial bt(10, 12);

int in1 = 8;
int in2 = 9;
char c;

void forward() {
  digitalWrite(in1, 1);
  digitalWrite(in2, 0);
}
void backward() {
  digitalWrite(in1, 0);
  digitalWrite(in2, 1);
}
void stop() {
  digitalWrite(in1, 0);
  digitalWrite(in2, 0);
}
void setup() {
  // put your setup code here, to run once:
  bt.begin(9600);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (bt.available()) {
    c = bt.read();
    Serial.write(bt.read());
    if (c == 'f') {
      forward();
    }
    if (c == 'b') {
      backward();
    }
    if (c == 's') {
      stop();
    }
  }
}
