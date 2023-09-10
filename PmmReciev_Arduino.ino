void setup() {
  pinMode(13,INPUT);
  Serial.begin(9600);
}

void loop() {
  do {
  Serial.println(pulseIn(13,HIGH));
  Serial.print("\t");
  } while (
    pulseIn(13,LOW) > 220 && pulseIn(13,LOW) < 1800
  );
  Serial.println("\b");
}
