void myFunction(){
    Serial.print(" Hi is interrup state ");
}

void setup(){
    pinMode(2, INPUT_PULLUP);
    Serial.begin(9600);
    
    interrupts();// การทำงานที่ไปขัดการทำงานที่เป็นอยู่ ซึ่งจะใช้ได้แค่2ขาคือ ขา2 & ขา3 ใช้เป็น 0 กับ 1
    attachInterrupt(0, myFunction , FALLING); //ขา2 , เรียกใช้งานvoid myFunction
}

void loop (){
    while (1){
        // To do something การทำงานที่กำลังดำเนินอยู่เรื่อยๆ
    }
    myFunction();
}

