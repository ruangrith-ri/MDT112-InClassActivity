void myfunction(){
    Serial.println("Hi, This is interrupt state");
}

void setup(){
    pinMode(2,INPUT_PULLUP);
    pinMode(5,OUTPUT);
    attachInterrupt(0,loop,FALLING);
    //attachInterrupt(digitalPinToInterrupt(2),myfunction,FALLING);
    Serial.begin(9600);
}

void loop(){
    
    digitalWrite(5,1);
    interrupts();

    
    digitalWrite(5,0);
    delay(2000);
    noInterrupts();
    //delay(2000);

}