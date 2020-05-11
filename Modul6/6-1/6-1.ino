/* bool lastState = true;

void setup(){
    Serial.begin(9600);
    pinMode(2, INPUT_PULLUP);
}
int count=0;
void loop(){
    bool currentState=digitalRead(2);*/
    
    /* Serial.println("currentState:"+String(currentState)+"<--> lastState: "+String(lastState));
    lastState = currentState;*/

    /* if( lastState>currentState)
    {
    tone(8,200,500);
    delay(250);
    tone(8,400,100);
        Serial.println("State Falling");
        count++;
    }
    else if(lastState < currentState)
    {
    tone(8,400,500);
    Serial.println("State Rising");
    ;
    }
    Serial.println(count);*/

    /* if(lastState > currentState)
    {
        delay(20);
        if(digitalRead(2)==LOW)
        {
            Serial.println("state FALLING with Debouce");
        }
    }
    lastState=currentState;
    delay(50);*/
    bool lastState = true;
int x = 0;
void setup(){
    pinMode(2,INPUT_PULLUP);
    Serial.begin(9600);
}

void loop(){
    bool currentState = digitalRead(2);
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

