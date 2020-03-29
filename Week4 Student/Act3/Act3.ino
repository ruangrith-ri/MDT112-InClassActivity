void setup(){
    
    Serial.begin(9600);
    enum Position{
        student,  //0
        employee, //1
        teacher   //2
    };

    struct CardID{
        int id;
        String name;
        Position pos;
        String idprint;
    };

    
    String NAME;
    String IDPRINT;

    CardID card1;
    card1.id = 62120501001;
    card1.name = "A";
    card1.pos = student;
    card1.idprint = "62120501001";

    CardID card2;
    card2.id = 62120501002;
    card2.name = "B";
    card2.pos = student;
    card2.idprint = "62120501002";
    
    CardID card3;
    card3.id = 62120501003;
    card3.name = "C";
    card3.pos = student;
    card3.idprint = "62120501003";

    CardID card4;
    card4.id = 62120501004;
    card4.name = "D";
    card4.pos = employee;
    card4.idprint = "62120501004";

    CardID card5;
    card5.id = 62120501005;
    card5.name = "E";
    card5.pos = employee;
    card5.idprint = "62120501005";

    CardID card6;
    card6.id = 62120501006;
    card6.name = "F";
    card6.pos = teacher;
    card6.idprint = "62120501006";

    CardID card7;
    card7.id = 62120501007;
    card7.name = "G";
    card7.pos = teacher;
    card7.idprint = "62120501007";

    CardID card8;
    card8.id = 62120501008;
    card8.name = "H";
    card8.pos = teacher;
    card8.idprint = "62120501008";

    CardID card9;
    card9.id = 62120501009;
    card9.name = "I";
    card9.pos = teacher;
    card9.idprint = "62120501009";

    CardID card10;
    card10.id = 621205010010;
    card10.name = "J";
    card10.pos = teacher;
    card10.idprint = "621205010010";

    CardID cardMDT[10] = {card1,card2,card3,card4,card5,card6,card7,card8,card9,card10};
    
    for(int i=9;i>=0;i--){
        cardMDT[i];
        if (cardMDT[i].pos == 2){
            Serial.println("teacher");
            IDPRINT = cardMDT[i].idprint;
            Serial.println(IDPRINT);
            NAME = cardMDT[i].name;
            Serial.println(NAME);
            Serial.println();
            
        }
    
        
    }
    for(int i=9;i>=0;i--){
        if (cardMDT[i].pos == 1){
            
            Serial.println("employee");
            IDPRINT = cardMDT[i].idprint;
            Serial.println(IDPRINT);
            NAME = cardMDT[i].name;
            Serial.println(NAME);
            Serial.println();
        }
    }
    for(int i=9;i>=0;i--){
        if (cardMDT[i].pos == 0){
            
            Serial.println("student");
            IDPRINT = cardMDT[i].idprint;
            Serial.println(IDPRINT);
            NAME = cardMDT[i].name;
            Serial.println(NAME);
            
        }
    }
    Serial.println("A");

}

void loop(){
    

}