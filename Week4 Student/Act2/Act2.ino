void setup(){
    int sampleArray[] = {10,20,30,40,50,60,70,80,90,100};
    String stringShowArray;

    for (int n = 0; n<=9; n++) {
    
    stringShowArray = stringShowArray + sampleArray[n] + '\t';
    }

    Serial.begin(9600);
    Serial.println(stringShowArray);
}
void loop(){}