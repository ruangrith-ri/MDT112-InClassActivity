void setup ()
{
    Serial.begin(9600);
    int x = 5;
    Serial.println(int(&x));  //8FA
    Serial.println(int(&x),16);  //2298
    Serial.println(*(&x));  //5
    int *xp;
    xp = &x;
    Serial.println(*xp);  
    Serial.println(int(xp),16);  
}
void loop () 
{
}