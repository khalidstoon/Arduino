
void setup() {
  // put your setup code here, to run once:
  DDRB |= 1 << 0x05;
  

}

void loop() {
  // put your main code here, to run repeatedly:
  PORTB |= 1 << 0x05;
  _delay_ms(1000);
  PORTB &= ~(1 << 0x05);
  _delay_ms(1000);
}
