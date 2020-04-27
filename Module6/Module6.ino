bool lastState = true;
int x = 0;
void setup(){
    pinMode(2,INPUT_PULLUP);
    Serial.begin(9600);
}

void loop(){
    bool currentState = digitalRead(2);

    /* Serial.println("currentState : "+ String(currentState)+
                    " lastState : " + String(lastState));
                    */
    
    if(lastState > currentState)
    {
        Serial.println("State FALLING "+String(x)+" ");
        
        tone(8,500,500);
        tone(8,500,500);
        x++;
    }
    else if(lastState < currentState)
    {
        Serial.println("State RISING "+String(x)+" ");
        tone(8,400,500);
        x++;
    }

    lastState = currentState;
    delay(50);
}