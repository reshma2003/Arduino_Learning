int J, K, CLK;
int Q = 0;

void setup() {
  pinMode(3, INPUT); 
  pinMode(4, INPUT); 
  pinMode(2, INPUT); 
  pinMode(8, OUTPUT);
}

void loop() {
  CLK = digitalRead(2);
  if (CLK == HIGH) {
    J = digitalRead(3);
    K = digitalRead(4);

    if (J == 0 && K == 0) Q = Q;
    else if (J == 0 && K == 1) Q = 0;
    else if (J == 1 && K == 0) Q = 1;
    else if (J == 1 && K == 1) Q = !Q;
  }
  digitalWrite(8, Q);
}
