int zahl = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Hallo Welt");
  zahl ++;
  delay(1000);
}
