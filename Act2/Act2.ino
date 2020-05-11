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

    if (state == "ON"){
    digitalWrite(5, 1);

        if (cuurrentTime - lasttimeStrateChange >= 500){
            state = "OFF";
            lasttimeStrateChange = cuurrentTime;
        }
    }

    if (state == "OFF"){
        digitalWrite(5, 0);

        if (cuurrentTime - lasttimeStrateChange >= 500){
            state = "ON";
            lasttimeStrateChange = cuurrentTime;
        }
    }

}