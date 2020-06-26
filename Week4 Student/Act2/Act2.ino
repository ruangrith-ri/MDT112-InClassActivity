void setup(){
    Serial.begin(9600);
    int sampleArray[] = {10,20,30,40,50,60,70,80,90,100};
    String stringShowArray;
    for (int i=0;i<10;i++){
        stringShowArray = stringShowArray + sampleArray[i] + '\t';
        
    }
    Serial.println(stringShowArray);
    
}

void loop(){

}