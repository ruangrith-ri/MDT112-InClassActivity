int myNum[5] = {10, 20, 30, 40, 50};
int *myPoint = myNum;
void setup ()
{
    Serial.begin(9600);
    //pointer
    for (int i = 0; i < 5; i++)
    {
        Serial.println("Address " + String(i) + " = " + int(myPoint) + " Value : " + int(*myPoint));
        myPoint++;
    }
    Serial.println("------------------------------------------------------");

    //index
    for (int i = 0; i < 5; i++)
    {
        Serial.println("Address " + String(i) + " = " + int(&myNum[i]) + " Value : " + int(myNum[i]));
        myPoint++;
    }
}
void loop () 
{
}