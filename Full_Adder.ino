int A, B, Cin;
int S1, C1, C2;
int Sum, Carry;

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
  Cin = digitalRead(5);

  
  S1 = A ^ B;
  C1 = A & B;

  
  Sum = S1 ^ Cin;
  C2 = S1 & Cin;

  
  Carry = C1 | C2;

  digitalWrite(8, Sum);
  digitalWrite(9, Carry);
}
