
#define dir 7
#define stp 6
int pas;

void setup() {
  // put your setup code here, to run once:
  pinMode(dir, OUTPUT);
  pinMode(stp, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  rotate(90, 1);
  delay(1000);
  rotate(360, 0);
  delay(1000);
}
void rotate(int angle, int direction) {
  digitalWrite(dir, direction);
  pas = angle * 200 / 360;
  for (int g = 0; g < pas; g++) {
    digitalWrite(stp, 0);
    delay(1);
    digitalWrite(stp, 1);
    delay(1);
    digitalWrite(stp, 0);
    delay(1);
  }
}
