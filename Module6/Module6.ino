bool lastState = true;

void setup(){
    pinMode(2, INPUT_PULLUP);

    Serial.begin(9600);
}

int x = 0;
void loop(){
    bool currentState = digitalRead(2);
    /* 

    Serial.println("currentState : " + String(currentState) +
                   " <-->lastState : " + String(lastState));
    */
 if(lastState > currentState)
    {  
        tone(8,200,50);
        delay (100);
        tone(8,200,50);
        Serial.println("State Falling");
        
        x++;
    }
    if(lastState < currentState)
    {   tone(8,200,50);
        Serial.println("State Rising");
      
        x++;

    }
     lastState = currentState;
     delay(50);
}