void setup ()
{
    Serial.begin(9600);
    int sampleArray[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    
    String stringArrey;
    
    for (int i = 0; i <= 9; i++)
    {
    stringArrey = stringArrey + sampleArray[i] + '\t';
    }
    Serial.println(stringArrey);
}
void loop () 
{
}