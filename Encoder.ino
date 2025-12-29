int A0, A1, A2, A3;
int Y0, Y1;

void setup() {
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  A0 = digitalRead(3);
  A1 = digitalRead(4);
  A2 = digitalRead(5);
  A3 = digitalRead(6);

  Y0 = A1 || A3;
  Y1 = A2 || A3;

  digitalWrite(7, Y0);
  digitalWrite(8, Y1);
}
