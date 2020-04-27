bool lastState = true;

void setup(){
    Serial.begin(9600);
    pinMode(2, INPUT_PULLUP);
}
int count=0;
void loop(){
    bool currentState=digitalRead(2);
    
    /* Serial.println("currentState:"+String(currentState)+"<--> lastState: "+String(lastState));
    lastState = currentState;*/

    if( lastState>currentState)
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
    Serial.println(count);
    lastState=currentState;
    delay(50);
}