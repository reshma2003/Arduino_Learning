int A, B;

void setup() {
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  A = digitalRead(3);
  B = digitalRead(4);

  int Difference = (A && !B) || (!A && B);
  int Borrow = (!A) && B;

  digitalWrite(5, Difference);
  digitalWrite(6, Borrow);
}
