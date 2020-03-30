// void setup(){
//     Serial.begin(9600);
//     // int X = 5;

//     /* Serial.println(int(&X));
//     Serial.println(int(&X),16);
//     Serial.println(*(&X)); */

//   /*  int *XP;
//     XP = &X;
//     Serial.println("This is value : " + String(*XP));
//     Serial.println(int(XP),16); */

//     // int *XP = &X;
//     // int y = 999;
//     // XP = &y;
//     // *XP = X;
//     // Serial.println(*XP);

// int Num[5] = {10,20,30,40,50};
// }

int Num[5] = {10,20,30,40,50};
int *NumPoint = Num;

void setup(){
    Serial.begin(9600);
    // Serial.println("Address" + String(0)+ " = " + int(NumPoint) + " Value = "+ int(*NumPoint));

//1  via Pointer
    for (int i = 0; i < 5; i++) {
    Serial.println("Address" + String(i)+ " = " + int(NumPoint) + " Value = "+ int(*NumPoint));
    NumPoint++;
    
    }
Serial.println("-----------------------------------------------");
 //2 via index
    for (int i = 0; i < 5; i++) {
    Serial.println("Address" + String(i)+ " = " + int(&Num[i]) + " Value = "+ int(Num[i]));
    }
}

void loop(){

}