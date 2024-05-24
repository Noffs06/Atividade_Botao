#define led 21
#define butao 0

void setup() {
  pinMode(led, OUTPUT);
  pinMode(butao, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(butao) == LOW){
    digitalWrite(led, HIGH);
  } else{
    digitalWrite(led, LOW);
  }
}
