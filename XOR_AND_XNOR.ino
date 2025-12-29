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

  int XOR = (A && !B) || (!A && B);
  int XNOR = !XOR;

  digitalWrite(5, XOR);
  digitalWrite(6, XNOR);
}
