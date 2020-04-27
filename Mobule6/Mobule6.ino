bool laststate = true;
int x = 0;
void setup()
{
    pinMode(2,INPUT_PULLUP);

    Serial.begin(9600);
}
void loop()
{
    bool currentSteate = digitalRead(2);

    /* Serial.println("currentSteate : "+String(currentSteate) + "lastState : " + String(laststate));

    laststate = currentSteate; */

    if(laststate > currentSteate)
    {
        Serial.println("Falling");
        tone(8,400,100);
        delay(100);
        tone(8,400,100);
        x++;
        Serial.println(x);
    }

    else if (currentSteate != laststate) 
    {
        Serial.println("Rising");
        tone(8,200,1000);
        
    }
    laststate = currentSteate;
    
    delay(50);
    Serial.println("-------------------------------------");
}