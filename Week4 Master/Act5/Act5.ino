extern int b;

void setup() { Serial.begin(9600); }

void loop() {
  b = 10;
  static int a = 5;
  a++;
  Serial.println(z);

  delay(100);
}
int z = 5;
