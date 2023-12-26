const int CarRed = 2;
const int CarAmber = 3;
const int CarGreen = 4;
const int PedRed = 5;
const int PedGreen = 6;

void setup() {
  pinMode(CarRed, OUTPUT);
  pinMode(CarAmber, OUTPUT);
  pinMode(CarGreen, OUTPUT);
  pinMode(PedRed, OUTPUT);
  pinMode(PedGreen, OUTPUT);

  // starting state - Vehicles GO - Pedestrians STOP
  digitalWrite(CarGreen, HIGH);
  digitalWrite(PedRed, HIGH);
}

void loop() {
  // Car Green ON
  digitalWrite(CarGreen, HIGH);
  delay(10000);

  // Amber ON Green OFF
  digitalWrite(CarGreen, LOW);
  digitalWrite(CarAmber, HIGH);
  delay(2000);

  // Amber OFF Red ON
  digitalWrite(CarAmber, LOW);
  digitalWrite(CarRed, HIGH);
  delay(2000);

  // Pedestrian Red OFF Green ON
  digitalWrite(PedRed, LOW);
  digitalWrite(PedGreen, HIGH);
  delay(10000);

  // Flash Pedestrian Green
  for (int repeat = 0; repeat < 5; repeat++) {
    digitalWrite(PedGreen, LOW);
    delay(250);
    digitalWrite(PedGreen, HIGH);
    delay(250);
  }

  // Pedestrian Red ON Green OFF
  digitalWrite(PedRed, HIGH);
  digitalWrite(PedGreen, LOW);
  delay(2000);

  // Car Red ON
  digitalWrite(CarRed, LOW);
}
