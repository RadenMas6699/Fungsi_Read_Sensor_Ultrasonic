float readSensorUltrasonic(int EchoPin, int TrigPin) {
  digitalWrite(EchoPin, LOW);
  delayMicroseconds(2);
  digitalWrite(TrigPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(TrigPin, LOW);
  float Time = pulseIn(EchoPin, HIGH);
  float jarak = Time / 29 / 2;
  return jarak;
}
