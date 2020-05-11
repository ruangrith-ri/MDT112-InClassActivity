long lasttimeStageChange = 0;
String state = "ON";

void setup(){
    Serial.begin(9600);
    pinMode(5,OUTPUT);

}

void loop(){
    long currentTime = millis();

    if(state == "ON"){
        digitalWrite(5,1);
            if(currentTime - lasttimeStageChange >= 500){
            state = "OFF";
            lasttimeStageChange = currentTime;
        }
    }
    else if(state == "OFF"){
        digitalWrite(5,0);
        if(currentTime - lasttimeStageChange >= 500){
            state = "ON";
            lasttimeStageChange = currentTime;
        }   
    }
    Serial.println(currentTime);//6(1)แบบif(...&&...)   5(2)แบบ(ifซ้อนif)<---ซ้อนเร็วกว่า&&เฉย...
}