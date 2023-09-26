int light  = 13;
int wait = 200;

void setup() {
  // put your setup code here, to run once:
  pinMode(light, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(light, HIGH);
  delay(wait);
  digitalWrite(light, LOW);
  delay(wait);
}
