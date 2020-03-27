void setup(){
    int A[] = {10,20,30,40,50,60,70,80,90,100};

    String StringShowArray;

    for (int i = 0; i <= 9; i++) {
        StringShowArray = StringShowArray + A[i] + '\t' ;

    }
    Serial.begin(9600);
    Serial.println(StringShowArray);
}

void loop() {}