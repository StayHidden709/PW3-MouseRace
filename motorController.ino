int leftMotor = 5;
int rightMotor = 6;

void setup() {
  pinMode(leftMotor, OUTPUT);
  pinMode(rightMotor, OUTPUT);
}

void loop() {

  // Standard forward movement
  analogWrite(leftMotor, 140);
  analogWrite(rightMotor, 140);

  delay(500);

  // Corner testing adjustment
  // Slows right motor slightly to improve turning
  analogWrite(leftMotor, 150);
  analogWrite(rightMotor, 120);

  delay(300);

}
