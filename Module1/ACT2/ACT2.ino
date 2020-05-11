long lasttimestatechange = 0;
String state = "ON"
void setup()
{
    Serial.begin(9600);
    pinMode(5, OUTPUT);
}
void loop()
{
    long currenttime = millis();
    if (state == "ON" && currenttime - lasttimestatechange >= 500)
    {
        state = "OFF";
        lasttimestatechange = currenttime;
    }
    else if (state == "OFF"&& currenttime - lasttimestatechange >= 500)
    {
        state = "ON";
        lasttimestatechange = currenttime;
    }

    if (state == "ON")
    {
        digitalWrite(5,1);
    }
    else if (state == "OFF")
    {
        digitalWrite(5,0);
    }
}