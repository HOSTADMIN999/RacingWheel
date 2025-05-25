string key = ["a","d"];
int sensorPin = A0;
int sensorValue = 0;

void setup() {

}

int AnalogInputToAngle(int Value) {
  return 0.135*(511.5-value);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  if(analogInputToAngle(sensorValue) < 0); 
}
