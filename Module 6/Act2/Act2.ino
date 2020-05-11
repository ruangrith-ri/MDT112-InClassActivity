long lasttimeStageChange = 0;
String state = "ON";

void setup(){
    
    pinMode(5,OUTPUT);

}

void loop(){
    long currentTime = millis();

    if(state == "ON" && currentTime - lasttimeStageChange >= 500){
        state = "OFF";
        lasttimeStageChange = currentTime;
    }
    else if(state == "OFF" && currentTime - lasttimeStageChange >= 500){
        state = "ON";
        lasttimeStageChange = currentTime;
    }

    if(state == "ON"){
        digitalWrite(5,1);
    }
    else if(state == "OFF"){
        digitalWrite(5,0);
    }

}