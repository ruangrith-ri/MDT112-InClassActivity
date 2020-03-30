void swapnum(int &a,int &b){
    int c,d;
    c = b;
    d = a;
    Serial.println(c);
    Serial.println(d);
    Serial.println("");//Debug Buffer
}

void setup(){
    Serial.begin(9600);
    int A = 11,B=22;
    swapnum(A,B);
}

void loop(){
    
}
