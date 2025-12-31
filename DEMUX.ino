int I, S0, S1;
int Y0, Y1, Y2, Y3;

void setup() {
  
  pinMode(3, INPUT); 
  pinMode(4, INPUT); 
  pinMode(5, INPUT); 

  
  pinMode(6, OUTPUT); 
  pinMode(7, OUTPUT); 
  pinMode(8, OUTPUT); 
  pinMode(9, OUTPUT); 
}

void loop() {
  S0 = digitalRead(3);
  S1 = digitalRead(4);
  I  = digitalRead(5);

  
  Y0 = I && !S1 && !S0;
  Y1 = I && !S1 &&  S0;
  Y2 = I &&  S1 && !S0;
  Y3 = I &&  S1 &&  S0;

  
  digitalWrite(6, Y0);
  digitalWrite(7, Y1);
  digitalWrite(8, Y2);
  digitalWrite(9, Y3);
}
