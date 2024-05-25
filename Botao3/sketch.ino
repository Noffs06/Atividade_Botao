#define leds 4
#define botao 15

int roxo[leds] = {0, 2, 16, 5};
int rosa[leds] = {19, 21, 22, 23};




void setup() {
  for (int i = 0; i < leds; i++) {
    pinMode(roxo[i], OUTPUT);
    pinMode(rosa[i], OUTPUT);
  }
  pinMode(botao, INPUT_PULLUP);
}

void loop() {
  while (digitalRead(botao) == HIGH) {
    for (int i = 0; i < leds; i++) {
      digitalWrite(roxo[i], HIGH);
      digitalWrite(rosa[leds - 1 - i], HIGH);
      delay(250);
      digitalWrite(roxo[i], LOW);
      digitalWrite(rosa[leds - 1 - i], LOW);
    }
  }
  for (int i = 0; i < leds; i++){
    digitalWrite(roxo[i], HIGH);
    digitalWrite(rosa[i], HIGH);
    delay(250);
    digitalWrite(roxo[i], LOW);
    digitalWrite(rosa[i], LOW);
  }
}
