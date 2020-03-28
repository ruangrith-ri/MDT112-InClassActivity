void setup(){
    Serial.begin(9600);
    enum Position{
        student,
        employee,
        teacher
    };

    struct CardID{
        String id;
        String name ;
        Position pos;
    };
    CardID card1;
    card1.id = "62120501001";
    card1.name = "A";
    card1.pos = student;

    CardID card2;
    card2.id = "62120501002";
    card2.name = "B";
    card2.pos = student;
    
    CardID card3;
    card3.id = "62120501003";
    card3.name = "C";
    card3.pos = student;

    CardID card4;
    card4.id = "62120501004";
    card4.name = "D";
    card4.pos = employee;

    CardID card5;
    card5.id = "62120501005";
    card5.name = "E";
    card5.pos = employee;

    CardID card6;
    card6.id = "62120501006";
    card6.name = "F";
    card6.pos = teacher;

    CardID card7;
    card7.id = "62120501007";
    card7.name = "G";
    card7.pos = teacher;

    CardID card8;
    card8.id = "62120501008";
    card8.name = "H";
    card8.pos = teacher;

    CardID card9;
    card9.id = "62120501009";
    card9.name = "I";
    card9.pos = teacher;

    CardID card10;
    card10.id = "621205010010";
    card10.name = " J ";
    card10.pos = teacher;

    CardID cardMDT[10] = {card1,card2,card3,card4,card5,card6,card7,card8,card9,card10};
    
    for(int i=0;i<=9;i++){
        cardMDT[i];
        Serial.println(cardi.id);
        Serial.println(cardi.name);
        Serial.println(cardi.pos);
    }

    
}

void loop(){
    

}