int A0, A1;

void setup() {
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  A0 = digitalRead(3);
  A1 = digitalRead(4);

  digitalWrite(5, !A1 && !A0); 
  digitalWrite(6, !A1 && A0);  
  digitalWrite(7, A1 && !A0);  
  digitalWrite(8, A1 && A0);   
}
