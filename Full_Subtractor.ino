int A, B, Bin;
int D, Bout;

void setup() {
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  A = digitalRead(3);
  B = digitalRead(4);
  Bin = digitalRead(5);

  D = A ^ B ^ Bin;
  Bout = (!A & B) | (!A & Bin) | (B & Bin);

  digitalWrite(8, D);
  digitalWrite(9, Bout);
}
