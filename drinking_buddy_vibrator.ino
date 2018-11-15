int motorPin = D2;

void setup()
{
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Vibrator test sketch");
}

void loop()
{
  Serial.println("going High");
  digitalWrite(motorPin, HIGH);
  delay(2000);

  Serial.println("going Low");
  digitalWrite(motorPin, LOW);
  delay(2000);
}
