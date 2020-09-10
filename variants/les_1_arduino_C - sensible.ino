void setup(){



pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
}

void loop(){
  blinkon();
  delay(1000);
  blinkoff();
  delay(1000);
}


void blinkon(){
  // turn all 4 leds on
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
}

void blinkoff(){
  // turn all 4 leds off
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
}
