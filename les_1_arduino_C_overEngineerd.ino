int leds [] = {7, 8, 9 ,10};
int pinamount = 4;

void setup(){
  for (int i = 0; i<pinamount; i++) 
  {
    pinMode(leds[i], OUTPUT);
  }
// pinMode(7, OUTPUT);
// pinMode(8, OUTPUT);
// pinMode(9, OUTPUT);
// pinMode(10, OUTPUT);
}

void loop(){
  blinkon();
  delay(1000);
  blinkoff();
  delay(1000);
}


void blinkon(){
  // turn all 4 leds on
    for (int i = 0; i<pinamount; i++) 
  {
    digitalWrite(leds[i], HIGH);
  }
//   digitalWrite(7, HIGH);
//   digitalWrite(8, HIGH);
//   digitalWrite(9, HIGH);
//   digitalWrite(10, HIGH);
}

void blinkoff(){
  for (int i = 0; i<pinamount; i++) 
  {
    digitalWrite(leds[i], LOW);
  }
  // turn all 4 leds off
  // digitalWrite(7, LOW);
  // digitalWrite(8, LOW);
  // digitalWrite(9, LOW);
  // digitalWrite(10, LOW);
}
