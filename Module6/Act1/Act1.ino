bool lastState = true;

void setup() {
  pinMode(2, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  bool currentState = digitalRead(2);

  if (lastState > currentState) {
    delay(20);

    if (digitalRead(2) == LOW) {
      Serial.println("State FALLING with Debounce");
    }
  }

  lastState = currentState;
  delay(50);
}
