void setup()
{
Serial.begin(9600);
}
void loop()
{
int i = 524;
Serial.println("String(i) = " + String(i));
Serial.println();
Serial.println("String(i, BIN) = " + String(i, BIN));
Serial.println("String(i, HEX) = " + String(i, HEX));
Serial.println("String(i, DEC) = " + String(i, DEC));
Serial.println();
delay(1000);
}
