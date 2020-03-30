    int num[5] = {10,20,30,40,50};
    int *myPoint = num;

void setup(){
    Serial.begin(9600);
    // pointter
    for(int i = 0 ;i < 5 ;i++){
        Serial.println("Address"+ String(i) + " = " + int(myPoint) + "value : " + int(*myPoint));    
        myPoint++; 
    }
      Serial.println("-----------------------------------------")

     // index
    for (int z = 0 ;  i < z ; z++){
        Serial.println("address " + String(z)+ " = "+ int(&num(z) + "Value : " + int(num[z]));
        }
   

  

}
void loop(){

}