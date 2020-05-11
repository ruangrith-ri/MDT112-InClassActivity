bool lastState = true;
void setup()
{
    Serial.begin(9600);                        
    pinMode(2, INPUT_PULLUP);
}
int count = 0;
void loop()
{
    bool currentState = digitalRead(2);

    if(lastState > currentState)                
    {
        count++;
        Serial.println("State Falling");        
        tone(8,200,100);                        
        delay(250);
        tone(8,400,100);                        
    }

   if(lastState < currentState)                 
   {
    Serial.println("State Rising");             
    tone(8,400,100);                            
    Serial.println(count);
   }

    lastState = currentState;
    delay(50);
}