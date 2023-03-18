const int sensorPin = A0;
const int ledPin = 13;

int sensorValue = 0;

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin);

  if (sensorValue >= 512) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  Serial.print("Sensor: ");
  Serial.println(sensorValue);

  delay(100);
}
