// define de pinnen
int red = 12;
int yellow = 11;
int green = 10;

void setup() {
  // set pins output
  Serial.begin(115200);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  opB();
}
void opB(){
  // opdracht B: 5. Laat twee LEDjes tegelijkertijd knipperen.
  for (int i = 0; i<15; i++) {
    digitalWrite(red, HIGH);
    Serial.write("red High\n");
    digitalWrite(green, HIGH);
    Serial.write("green High\n");
    delay(150);
    digitalWrite(red, LOW);
    Serial.write("red LOW\n");
    digitalWrite(green, LOW);
    Serial.write("green LOW\n");
    delay(150);
    }
   // opdracht B: 6. Laat om en om de LEDjes rood groen en rood geel knipperen.
   for (int i = 0; i<15; i++){
    digitalWrite(red, HIGH);
    digitalWrite(green, HIGH);
    Serial.write("red,green High\n");
    delay(150);
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    Serial.write("red,green LOW\n");
    delay(150);
    digitalWrite(red, HIGH);
    digitalWrite(yellow, HIGH);
    Serial.write("red,yellow HIGH\n");
    delay(150);
    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);
    Serial.write("red,yellow LOW\n");
    delay(150);
    }

    // opdracht B: 7. Maar een looplicht van rood naar groen naar geel en weer terug naar groen en rood.
  while (true) {
    digitalWrite(red, HIGH);
    delay(150);
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    delay(150);
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    delay(150);
    digitalWrite(yellow, LOW);
    delay(150);
    digitalWrite(green, HIGH);
    delay(150);
    digitalWrite(green, LOW);
    }
}