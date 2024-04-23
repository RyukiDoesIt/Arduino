void setup() {
    pinMode(24,OUTPUT);
    pinMode(32,OUTPUT);
    pinMode(42,OUTPUT);
}

void loop() {
    digitalWrite(24,HIGH);
    delay(1000);
    digitalWrite(24,LOW);
    delay(500);
    digitalWrite(32,HIGH);
    delay(1000);
    digitalWrite(32,LOW);
    delay(500);
    digitalWrite(42,HIGH);
    delay(1000);
    digitalWrite(42,LOW);
    delay(500);
}
