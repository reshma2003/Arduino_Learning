int D, CLK;
int Q = 0;

void setup() {
  pinMode(3, INPUT); 
  pinMode(2, INPUT); 
  pinMode(8, OUTPUT);
}

void loop() {
  CLK = digitalRead(2);
  if (CLK == HIGH) {
    D = digitalRead(3);
    Q = D;
  }
  digitalWrite(8, Q);
}
