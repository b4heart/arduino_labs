int GreenLed = 10;

int YellowLed = 11;

int RedLed = 12;

void setup() {
  // put your setup code here, to run once:  

pinMode(GreenLed,OUTPUT);
pinMode(YellowLed,OUTPUT);
pinMode(RedLed,OUTPUT);

digitalWrite(GreenLed,LOW);
digitalWrite(YellowLed,LOW);
digitalWrite(RedLed,LOW);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(GreenLed,LOW);
  digitalWrite(YellowLed,HIGH);
  digitalWrite(RedLed,LOW);
  delay(2000);
  Serial.println("yellow light on!!!!!!!!!!!!!!!!!!!!!!!!!");

  digitalWrite(GreenLed,HIGH);
  digitalWrite(YellowLed,LOW);
  digitalWrite(RedLed,LOW);
  delay(10000);
  Serial.println("green light on!!!!!!!!!!!!!!!!!!!!!!!!!");

  digitalWrite(GreenLed,LOW);
  digitalWrite(YellowLed,HIGH);
  digitalWrite(RedLed,LOW);
  delay(2000);
  Serial.println("yellow light on!!!!!!!!!!!!!!!!!!!!!!!!!");

  
  digitalWrite(GreenLed,LOW);
  digitalWrite(YellowLed,LOW);
  digitalWrite(RedLed,HIGH);
  delay(5000);
  Serial.println("Red light on!!!!!!!!!!!!!!!!!!!!!!!!!");


}





























  
