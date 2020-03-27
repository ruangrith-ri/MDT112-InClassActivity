void srtup(){  
    int ar[] = {10,20,30,40,50,60,70,80,90,100};

    String Show ;

    for (int i = 0 ; i <=9 ; i++){
        Show = Show + ar[i] + '\t';
    }
    Serial.begin(9600);
    Serial.println(Show);
}
void loop(){

}