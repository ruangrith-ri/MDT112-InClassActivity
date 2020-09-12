//----------------------------------------
/* void setup(){
    Serial.begin(9600);
}*/

/* void loop(){
    Serial.print(millis());
}*/
//----------------------------------------

long lastTimeStataChange = 0;
String state = "ON";

void setup(){

}

void loop(){
    long currentTime = millis();
    
    if (state == "ON" && currentTime - lastTimeStataChange >= 500 ){
        state = "OFF";
        lastTimeStataChange = currentTime; 
    }
    else if (state == "OFF" && currentTime - lastTimeStataChange >= 500 ) {
        state = "ON";
        lastTimeStataChange = currentTime; 
    }

    if (state == "ON"){
        digitalWrite(5,1);
    }
    else if (state == "OFF") {
         digitalWrite(5,0);
    }
    
}