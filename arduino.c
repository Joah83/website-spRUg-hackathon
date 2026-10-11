#define waitT 1000
#define sensorPin A0
int j=1;
int sensorValue = 0;
int moisturePercent = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(sensorPin);
  moisturePercent = map(sensorValue, 0, 1023, 0, 200);
  Serial.write((uint8_t)moisturePercent);
  Serial.flush();
  delay(waitT);
}
