void setup(){
    int num[]={10,20,30,40,50,60,70,80,90,100};
    String number;
    for (int c = 0; c <= 9; c++) {
    number = number + num[c] + '\t';
    }
    Serial.begin(9600);
    Serial.println(number);
}
void loop(){

}