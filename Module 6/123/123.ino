long H = 0,M=0,S=0;
void myfunction(){
    Serial.println("H:" + String(H)+" - M:"+ String(M)+" - S:"+ String(S) + "\n");
}

void setup(){
    Serial.begin(9600);
    pinMode(2,INPUT_PULLUP);
    for(int i = 3;i<=13;i++){
        pinMode(i,OUTPUT);
    }
    attachInterrupt(digitalPinToInterrupt(2),myfunction,FALLING);
}


void loop(){
    long time = millis();
    if(time>1000){
        time = 0;
        S = S+1;
    }
    
    if(S>59){
        S = 0;
        M = M+1;
    }

    if(M>59){
        M = 0;
        H = H+1;
    } 

}

