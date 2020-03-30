void setup ()
{
    Serial.begin(9600);
    int x = 5;
    int *xp = &x;
    *xp = 10;
    Serial.println(*xp);
}
void loop () 
{
}