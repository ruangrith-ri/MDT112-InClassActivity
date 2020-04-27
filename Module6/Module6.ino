bool lastState = true;
void setup()
{ 
    pinMode(2,INPUT_PULLUP);
    Serial.begin(9600);
}
int x = 0;
void loop()
{   //เริ่มcurren = last
    bool currentState = digitalRead(2);
    /* Serial.println("currentState : "+String(currentState) + " <----> lastState : "+ String(lastState));
     lastState = currentState;*/

     /*กดค้างทำงานครั้งเดียว
     if (currentState != lastState)
     {
         Serial.println ("Change!!")
     }*/
    //กดครั้ง1ขึึ้นครั้งเดียว (1>0)
    if(lastState > currentState)
    {  
        tone(8,200,50);
        delay (100);
        tone(8,200,50);
        Serial.println("State Falling");
        Serial.println("number = "+String(x));
        x++;
    }
    if(lastState < currentState)
    {   tone(8,200,50);
        Serial.println("State Rising");
        Serial.println("number = "+String(x));
        x++;

    }
     lastState = currentState;
     delay(100);
}