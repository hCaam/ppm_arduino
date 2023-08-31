const int output = 2;
unsigned long previousMillis = 0;
const long interval = 20;
const int longPulse = 2;
const int delayPulse = 500;

void setup() {
  pinMode(output, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    for (int pulse = 0; pulse < 6; pulse++) {
      digitalWrite(output, HIGH);
      delay(longPulse);
      digitalWrite(output, LOW);
      delayMicroseconds(delayPulse);
    } 
  }
}
