#define qnt_led 5
#define butao 15
#define ledv 2

int pinoleds[qnt_led] = {0,16,5,19,21};

void setup() {
  for (int i = 0; i < qnt_led; i++){
    pinMode(pinoleds[i], OUTPUT);
  }
  pinMode(ledv, OUTPUT);
  pinMode(butao, INPUT_PULLUP);
}

void loop() {
  while(digitalRead(butao) == LOW){
    digitalWrite(ledv, HIGH);
    //enquanto eu não apertar o botão, nada acontece 
  }
  for (int i = 0; i < qnt_led; i++){
    digitalWrite(pinoleds[i], HIGH);
    delay(500);
    digitalWrite(pinoleds[i], LOW);
  }
}
