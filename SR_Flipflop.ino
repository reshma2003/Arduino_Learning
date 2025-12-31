int S, R, CLK;
int Q = 0, NQ = 1;

void setup() {
  pinMode(3, INPUT); 
  pinMode(4, INPUT); 
  pinMode(2, INPUT); 
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  CLK = digitalRead(2);
  if (CLK == HIGH) {
    S = digitalRead(3);
    R = digitalRead(4);

    if (S == 1 && R == 0) Q = 1;
    else if (S == 0 && R == 1) Q = 0;
  }
  NQ = !Q;
  digitalWrite(8, Q);
  digitalWrite(9, NQ);
}
