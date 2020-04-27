void setup(){
    pinMode(2,INPUT_PULLUP);
    pinMode(8,OUTPUT);
    Serial.begin(9600);
    

}

bool lastState = true;
int count = 0;

void loop(){
    bool currentState = digitalRead(2);
/* 
    Serial.println("currentState : " + String(currentState) + " <--> lastState : " + String(lastState));
    
*/

    if(lastState > currentState){
        delay(20);
        if(digitalRead(2) == 0){
            Serial.println("State FALLING with Debounce");
        }
        
    }
    if(lastState < currentState){
        Serial.println("State RISING\n");
        tone(8,400,200);
    }
    
    lastState = currentState;
    delay(50);//ไม่ให้ทำงานเร็วเกินไป
}