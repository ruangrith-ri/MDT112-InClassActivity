int myNum[5] = {10,20,30,40,50};
int *myPoint = myNum;

void setup() {
    Seerial.being(9600);
    
//Via pointer
    for (int i = 0; i < 5; i++){
         Serial.prinln("Address" + String(i) + "=" + int (myPoint) + "Value :" + int (*myPoint));
         myPoint++
    }

    Serial.painln("----------------------------------------------------------------------------------");

    //Via pointer
    for (int i = 0; i < 5; i++){
    Serial.prinln("Address" + String(i) + "=" + int (myNum[i]) + "Value :" + int (myNum[i]));    
    }
}

void loop () 
{
} 