int dataPin = D5;


void setup() {
Serial.begin(9600);
Serial.println("Init Complete");

pinMode(dataPin, OUTPUT);

}

void loop() {
  //babint hates spaces

Serial.println("Preparing to send start bit");
sendStartBit();

Serial.println("Preparing to send S1");
sendS1();
delay(50000);

}

void sendStartBit() {
  digitalWrite(dataPin, HIGH);
  delayMicroseconds(374);

  digitalWrite(dataPin, LOW);
  delayMicroseconds(13519);
  }

void sendS1() {
  
  digitalWrite(dataPin, HIGH);
  delayMicroseconds(1299);

  digitalWrite(dataPin, LOW);
  delayMicroseconds(385);

  digitalWrite(dataPin, HIGH);
  delayMicroseconds(1299);

  digitalWrite(dataPin, LOW);
  delayMicroseconds(414);

  digitalWrite(dataPin, HIGH);
  delayMicroseconds(374);

  digitalWrite(dataPin, LOW);
  delayMicroseconds(1308);

  digitalWrite(dataPin, HIGH);
  delayMicroseconds(374);

  digitalWrite(dataPin, LOW);
  delayMicroseconds(1308);

  digitalWrite(dataPin, HIGH);
  delayMicroseconds(374);

  digitalWrite(dataPin, LOW);
  delayMicroseconds(1336);

  digitalWrite(dataPin, HIGH);
  delayMicroseconds(1299);

  digitalWrite(dataPin, LOW);
  delayMicroseconds(385);

  digitalWrite(dataPin, HIGH);
  delayMicroseconds(1327);

  digitalWrite(dataPin, LOW);
  delayMicroseconds(385);

  digitalWrite(dataPin, HIGH);
  delayMicroseconds(374);

  digitalWrite(dataPin, LOW);
  delayMicroseconds(1315);

  digitalWrite(dataPin, HIGH);
  delayMicroseconds(1299);

  digitalWrite(dataPin, LOW);
  delayMicroseconds(385);

  digitalWrite(dataPin, HIGH);
  delayMicroseconds(1327);

  digitalWrite(dataPin, LOW);
  delayMicroseconds(385);

  digitalWrite(dataPin, HIGH);
  delayMicroseconds(374);

  digitalWrite(dataPin, LOW);
  delayMicroseconds(1308);

  digitalWrite(dataPin, HIGH);
  delayMicroseconds(374);

  digitalWrite(dataPin, LOW);
  delayMicroseconds(1336);

  digitalWrite(dataPin, HIGH);
  delayMicroseconds(1299);

  digitalWrite(dataPin, LOW);
  delayMicroseconds(385);

  digitalWrite(dataPin, HIGH);
  delayMicroseconds(1299);

  digitalWrite(dataPin, LOW);
  delayMicroseconds(414);

  digitalWrite(dataPin, HIGH);
  delayMicroseconds(374);

  digitalWrite(dataPin, LOW);
  delayMicroseconds(1308);

  digitalWrite(dataPin, HIGH);
  delayMicroseconds(1299);

  digitalWrite(dataPin, LOW);
  delayMicroseconds(395);

  digitalWrite(dataPin, HIGH);
  delayMicroseconds(402);

  digitalWrite(dataPin, LOW);
  delayMicroseconds(1308);

  digitalWrite(dataPin, HIGH);
  delayMicroseconds(374);

  digitalWrite(dataPin, LOW);
  delayMicroseconds(1308);

  digitalWrite(dataPin, HIGH);
  delayMicroseconds(374);

  digitalWrite(dataPin, LOW);
  delayMicroseconds(1336);

  digitalWrite(dataPin, HIGH);
  delayMicroseconds(1299);

  digitalWrite(dataPin, LOW);
  delayMicroseconds(385);

  digitalWrite(dataPin, HIGH);
  delayMicroseconds(374);

  digitalWrite(dataPin, LOW);
  delayMicroseconds(1336);

  digitalWrite(dataPin, HIGH);
  delayMicroseconds(374);

  digitalWrite(dataPin, LOW);
  delayMicroseconds(1308);

  digitalWrite(dataPin, HIGH);
  delayMicroseconds(1299);

  digitalWrite(dataPin, LOW);
  delayMicroseconds(385);

  digitalWrite(dataPin, HIGH);
  delayMicroseconds(1327);

  digitalWrite(dataPin, LOW);
  delayMicroseconds(387);

}
