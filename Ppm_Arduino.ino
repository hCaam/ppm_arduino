const int output = 3;
unsigned int previousMillis = 0;
const long interval = 20;
const int delayPulse = 500;
int pulseDc[] = {1000, 1200, 1400, 1600, 1800, 2000};
int manyPulse = 6;

void setup() {
  pinMode(output, OUTPUT);
  Serial.begin(9600);
}

void loop() {

unsigned int currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    for (int pulse = 0; pulse < manyPulse; pulse++) {
      Pulse(pulseDc[pulse]);
    } 
  }
}

void Pulse(int dc) {
  digitalWrite(output, HIGH);
  delayMicroseconds(dc);
  digitalWrite(output, LOW);
  delayMicroseconds(delayPulse);
}
