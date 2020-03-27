void setup(){
    int sampleArray[]={10,20,30,40,50,60,70,80,90,100};
    String StringShowArray;

    for (int n = 0; n<=9; n++) {
        StringShowArray = StringShowArray + sampleArray[n] + '\t';
   
    }

    Serial.begin(9600);
    Serial.println(StringShowArray);
}
void loop(){}