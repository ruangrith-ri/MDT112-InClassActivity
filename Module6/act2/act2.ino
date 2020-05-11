long lastTimeStateChange =0;
String state = "on";
void setup(){
    pinMode(5, OUTPUT);
}
void loop(){
   //Serial.println(millis());
   long currenTime = millis();
   if(state =="on" && currenTime - lastTimeStateChange >= 500){
       state ="off";
       lastTimeStateChange = currenTime ;
   }
   else if(state =="off" && currenTime - lastTimeStateChange >= 500){
       state ="on";
       lastTimeStateChange = currenTime ; 
   }
    if (state =="on")
    {
        digitalWrite(5,1);
    }
    else if (state =="off ")
    {digitalWrite(5,0);
    }
}