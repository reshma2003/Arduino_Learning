int T, CLK;
int Q = 0;

void setup() {
  pinMode(3, INPUT); 
  pinMode(2, INPUT); 
  pinMode(8, OUTPUT);
}

void loop() {
  CLK = digitalRead(2);
  if (CLK == HIGH) {
    T = digitalRead(3);
    if (T == 1) Q = !Q;
  }
  digitalWrite(8, Q);
}
