bool lastState = true;
int count = 0;

void setup(){
    Serial.begin(9600);
    pinMode(2, INPUT_PULLUP);
}

void loop(){
    
    bool currentState = digitalRead(2);
    
    /* Serial.println("currentState : " + String(currentState)
    + "  <--> lastState : " + String(lastState));*/

    if (lastState > currentState) {
        Serial.println("State FALLING");
        tone(8, 500, 200);
        noTone(8);
        tone(8, 500, 200);
        count++;
    }
    if (lastState < currentState) {
        Serial.println("State RISING");
        tone(8, 500, 200);
        Serial.println(count);
    }

    lastState = currentState;
    delay(250);
}