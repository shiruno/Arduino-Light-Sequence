int timer = 1000;

void setup() {
pinMode(10, OUTPUT);
pinMode(9, OUTPUT);
pinMode(8, OUTPUT);
pinMode(7, OUTPUT);
pinMode(6, OUTPUT);
}

void loop() {
  digitalWrite(10,HIGH);
  delay(1000);
  digitalWrite(9,HIGH);
  delay(1000);
  digitalWrite(8,HIGH);
  delay(1000);
  digitalWrite(7,HIGH);
  delay(1000);
  digitalWrite(6,HIGH);
  delay(1000);
  digitalWrite(10,LOW);
  delay(1000);
  digitalWrite(9,LOW);
  delay(1000);
  digitalWrite(8,LOW);
  delay(1000);
  digitalWrite(7,LOW);
  delay(1000);
  digitalWrite(6,LOW);
  delay(1000);
}