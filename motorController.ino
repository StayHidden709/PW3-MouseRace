int leftMotor = 5;
int rightMotor = 6;

void setup() {
  pinMode(leftMotor, OUTPUT);
  pinMode(rightMotor, OUTPUT);
}

void loop() {
  //increased motor speed
  analogWrite(leftMotor, 200);
  analogWrite(rightMotor, 200);
}
