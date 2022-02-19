/*
  Raden Mas Dev
*/

// define pin
#define EchoPin1 2 //Sensor 1
#define TrigPin1 3 //Sensor 1
#define EchoPin2 4 //Sensor 2
#define TrigPin2 5 //Sensor 2

float jarak1, jarak2, luas1, luas2;

void setup() {
  // setup serial
  Serial.begin(9600);

  setupPinUltrasonic();
}

void loop() {
  jarak1 = random(10, 15);
  jarak2 = random(20, 25);

  luas1 = luasPersegi(jarak1);
  luas2 = luasPersegi(jarak2);

  //  tampilkanJarak();

  // baca nilai sensor ultrasonic
  jarak1 = bacaSensorJarak(EchoPin2, TrigPin2);
  jarak2 = bacaSensorJarak(EchoPin2, TrigPin2);

}

void tampilkanJarak() {
  // tampilkan nilai dari sensor ultrasonic
  Serial.print(jarak1);
  Serial.print(" ");
  Serial.print(luas1);
  Serial.print(" ");
  Serial.print(jarak2);
  Serial.print(" ");
  Serial.println(luas2);

  // set delay
  delay(500);
}
