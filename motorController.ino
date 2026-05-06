int leftMotor = 5;
int rightMotor = 6;

void setup() {
  pinMode(leftMotor, OUTPUT);
  pinMode(rightMotor, OUTPUT);
}

void loop() {
  analogWrite(leftMotor, 120);
  analogWrite(rightMotor, 120);
}
