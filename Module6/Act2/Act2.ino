long lasttime = 0;
String state = "ON";
void setup(){

    pinMode(5,OUTPUT);
}

void loop(){
    long current = millis();
    if(state == "ON" && current - lasttime >= 500){
        state = "OFF";
        lasttime = current;
        if(state == "ON"){
        digitalWrite(5,1);
        }else if (state == "OFF"){
        digitalWrite(5,0);
    }
    }else if (state == "OFF" && current - lasttime >= 500){
        state = "ON";
        lasttime = current;
        if(state == "ON"){
        digitalWrite(5,1);
        }else if (state == "OFF"){
        digitalWrite(5,0);
        }
    }
}


