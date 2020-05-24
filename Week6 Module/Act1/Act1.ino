bool lastState = true;
void setup()
{

pinMode(2,INPUT_PULLUP);
pinMode(3,OUTPUT);
Serial.begin(9600);

}

void loop()
{


bool currentState = digitalRead(2); 
/* 
Serial.println("currentState : "+String(currentState) + " <--> lastState : "+ String(lastState));
lastState = currentState;
delay(50);
*/
/* 
if (currentState) {Serial.println("State Rising");}
lastState = currentState;
delay(50);*/
/* 
if (currentState) 
{Serial.println("State Falling");tone(8,500,100);delay(500);tone(8,500,100);}
lastState = currentState;
delay(50);
*/
    if(lastState > currentState)
    {
       delay(100);
       if(digitalRead(2) == LOW)
       {
           Serial.println("State Falling with Debounce");
       }
    }
    lastState = currentState;
    delay(50);
}