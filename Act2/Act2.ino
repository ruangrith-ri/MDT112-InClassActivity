long lasttimeStrateChange = 0;
String state = "ON";

void setup()
{
    Serial.begin(9600);
    pinMode(5, OUTPUT);
}
void loop()
{
    long cuurrentTime = millis();

    if (state == "ON" && cuurrentTime - lasttimeStrateChange >= 500){
        state = "OFF";
        lasttimeStrateChange = cuurrentTime;
    }
    else if (state == "OFF" && cuurrentTime - lasttimeStrateChange >= 500){
        state = "ON";
        lasttimeStrateChange = cuurrentTime;
    }

    if(state == "ON"){
        digitalWrite(5, 1);
        
    }
    else if (state == "OFF"){
    digitalWrite(5, 0);
    }
}