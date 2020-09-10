/*
  rood_led pin 12
  geel_led pin 11
  groen_led pin 10

*/
int red = 12;
int yellow = 11;
int green = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  opA();
}

void opA(){
  digitalWrite(red, HIGH);
  delay(500);
  digitalWrite(red, LOW);

  digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(yellow, LOW);

  
  digitalWrite(green, HIGH);
  delay(1000);
  digitalWrite(green, LOW);
  opA();
}

