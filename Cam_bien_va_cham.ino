const int sensorPin = 4;

void setup() {
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorState = digitalRead(sensorPin);
  
  if (sensorState == LOW)
    Serial.println("Va chạm!");
  else 
    Serial.println("Không va chạm");

  delay(200);
}