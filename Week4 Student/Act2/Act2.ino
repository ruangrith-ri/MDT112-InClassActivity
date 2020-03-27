void setup(){   
    int sampleArray[] = {10,20,30,40,50,60,70,80,90,100};
    String sampleArrayTest;
    for(int i = 0;i<=9;i++){
        sampleArrayTest = sampleArrayTest + sampleArray[1] +'\t';
    }
    Serial.begin(9600);
    Serial.println(sampleArrayTest);

}
void loop(){

}