/* Modulation signal for MOSFET gate control for Clear mind */

void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, HIGH);
  delayMicroseconds(1000);
  digitalWrite(2, LOW);
  delayMicroseconds(1000);
  
}
