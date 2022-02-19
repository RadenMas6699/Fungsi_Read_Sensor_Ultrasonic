float bacaSensorJarak(int pinEcho, int pinTrig) {
  digitalWrite(pinEcho, LOW);
  delayMicroseconds(2);
  digitalWrite(pinTrig, HIGH);
  delayMicroseconds(5);
  digitalWrite(pinTrig, LOW);
  float Time = pulseIn(pinEcho, HIGH);
  float jarakSensor = Time / 29 / 2;
  return jarakSensor;
}

float luasPersegi(int sisi) {
  return sisi * sisi;
}
