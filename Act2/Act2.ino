/* void setup() {
    int samplearray[] = { 10,20,30,40,50,60,70,80,90,100 };
    String ShowArrey;
    for (int i = 0; i <= 9; i++) {
        ShowArrey = ShowArrey + samplearray[i] + '\t';
    }
    Serial.begin(9600);
    Serial.println(ShowArrey);
}
void loop() {}*/
void setup(){
    Serial.begin(9600);
    int x = 5;
    /*/Serial.println(int(&x));
    Serial.println(int(&x),16);
    Serial.println(*(&x));*/

    int *xp = &x;
    *xp =10;
   // Serial.println("This is value : "+String(*xp));
    Serial.println(*xp);
    }
void loop(){}