int a = 0;

void setup() {
  Serial.begin(9600);
  int x = 5;

    Serial.println(int(&x);
    Serial.println(int(&x),16);

    Serial.println(*(&x)); //5

    Serial.println("--------------------");
    int *xp;
    xp = &x;
    Serial.println(*xp); //5
    Serial.println(int(xp),16);
    Serial.println("--------------------");
}

void loop() {}
