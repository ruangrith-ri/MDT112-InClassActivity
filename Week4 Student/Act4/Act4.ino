int mynum[5]={10,20,30,40,50};
int *mypoint = mynum;

void setup(){
    Serial.begin(9600);
    
    //pointer
    

    for(int i = 0;i<=4;i++){
        Serial.println("Adress " + String(i) + " = " + int(mypoint) + " Value : "+int(*mypoint));
        mypoint++;
    }

    //Index
    Serial.println("---------------------------------------------------------");
    for(int i = 0;i<=4;i++){
        Serial.println("Adress " + String(i) + " = " + int(&mynum[i]) + " Value : "+ int(mynum[i]));
    }
}

void loop(){

}