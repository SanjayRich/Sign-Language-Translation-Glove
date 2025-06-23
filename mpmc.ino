// Pin definitions
const int flexSensor1Pin = A0;
const int flexSensor2Pin = A1;
const int flexSensor3Pin = A2;
const int flexSensor4Pin = A3;
const int flexSensor5Pin = A4;

void setup() {
  Serial.begin(9600); // Initialize Serial Monitor
}

void loop() {
  // Read all sensor values
  int flex1 = analogRead(flexSensor1Pin);
  int flex2 = analogRead(flexSensor2Pin);
  int flex3 = analogRead(flexSensor3Pin);
  int flex4 = analogRead(flexSensor4Pin);
  int flex5 = analogRead(flexSensor5Pin);

  // Check gesture condition
  if (flex1 < 280 && flex2 < 280 && flex3 < 280 && flex4 < 300 && flex5 < 310) {
    Serial.print("A");
    delay(5000);
  } else if (flex1 > 280 && flex2 > 280 && flex3 > 280 && flex4 > 300 && flex5 > 310) {
    Serial.print(" ");
    delay(5000);
  } else if (flex1 > 280 && flex2 > 280 && flex3 > 280 && flex4 > 300 && flex5 < 310) {
    Serial.print("B");
    delay(5000);
  } else if (flex1 > 280 && flex2 > 280 && flex3 > 280 && flex4 < 300 && flex5 > 310) {
    Serial.print("C");
    delay(5000);
  } else if (flex1 > 280 && flex2 > 280 && flex3 > 280 && flex4 < 300 && flex5 < 310) {
    Serial.print("D");
    delay(5000);
  } else if (flex1 > 280 && flex2 > 280 && flex3 < 280 && flex4 > 300 && flex5 > 310) {
    Serial.print("E");
    delay(5000);
  } else if (flex1 > 280 && flex2 > 280 && flex3 < 280 && flex4 > 300 && flex5 < 310) {
    Serial.print("F");
    delay(5000);
  } else if (flex1 > 280 && flex2 > 280 && flex3 < 280 && flex4 < 300 && flex5 > 310) {
    Serial.print("G");
    delay(5000);
  } else if (flex1 > 280 && flex2 > 280 && flex3 < 280 && flex4 < 300 && flex5 < 310) {
    Serial.print("H");
    delay(5000);
  } else if (flex1 > 280 && flex2 < 280 && flex3 > 280 && flex4 > 300 && flex5 > 310) {
    Serial.print("I");
    delay(5000);
  } else if (flex1 > 280 && flex2 < 280 && flex3 > 280 && flex4 > 300 && flex5 < 310) {
    Serial.print("J");
    delay(5000);
  } else if (flex1 > 280 && flex2 < 280 && flex3 > 280 && flex4 < 300 && flex5 > 310) {
    Serial.print("K");
    delay(5000);
  } else if (flex1 > 280 && flex2 < 280 && flex3 > 280 && flex4 < 300 && flex5 < 310) {
    Serial.print("L");
    delay(5000);
  } else if (flex1 > 280 && flex2 < 280 && flex3 < 280 && flex4 > 300 && flex5 > 310) {
    Serial.print("M");
    delay(5000);
  } else if (flex1 > 280 && flex2 < 280 && flex3 < 280 && flex4 > 300 && flex5 < 310) {
    Serial.print("N");
    delay(5000);
  } else if (flex1 > 280 && flex2 < 280 && flex3 < 280 && flex4 < 300 && flex5 > 310) {
    Serial.print("O");
    delay(5000);
  } else if (flex1 > 280 && flex2 < 280 && flex3 < 280 && flex4 < 300 && flex5 < 310) {
    Serial.print("P");
    delay(5000);
  } else if (flex1 < 280 && flex2 > 280 && flex3 > 280 && flex4 > 300 && flex5 > 310) {
    Serial.print("Q");
    delay(5000);
  } else if (flex1 < 280 && flex2 > 280 && flex3 > 280 && flex4 > 300 && flex5 < 310) {
    Serial.print("R");
    delay(5000);
  } else if (flex1 < 280 && flex2 > 280 && flex3 > 280 && flex4 < 300 && flex5 > 310) {
    Serial.print("S");
    delay(5000);
  } else if (flex1 < 280 && flex2 > 280 && flex3 > 280 && flex4 < 300 && flex5 < 310) {
    Serial.print("T");
    delay(5000);
  } else if (flex1 < 280 && flex2 > 280 && flex3 < 280 && flex4 > 300 && flex5 > 310) {
    Serial.print("U");
    delay(5000);
  } else if (flex1 < 280 && flex2 > 280 && flex3 < 280 && flex4 > 300 && flex5 < 310) {
    Serial.print("V");
    delay(5000);
  } else if (flex1 < 280 && flex2 > 280 && flex3 < 280 && flex4 < 300 && flex5 > 310) {
    Serial.print("W");
    delay(5000);
  } else if (flex1 < 280 && flex2 > 280 && flex3 < 280 && flex4 < 300 && flex5 < 310) {
    Serial.print("X");
    delay(5000);
  } else if (flex1 < 280 && flex2 < 280 && flex3 > 280 && flex4 > 300 && flex5 > 310) {
    Serial.print("Y");
    delay(5000);
  } else if (flex1 < 280 && flex2 < 280 && flex3 > 280 && flex4 > 300 && flex5 < 310) {
    Serial.print("Z");
    delay(5000);
  }
}

