int LED = 8;
int counter = 0;
void setup() {
  //put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //put your main code here, to run repeatedly:
  counter = counter + 3;
  Serial.print("next number  ");
  Serial.println(counter);
  digitalWrite(LED,HIGH);
  delay(500-counter);
  digitalWrite(LED,LOW);
  delay(500-counter);
}
