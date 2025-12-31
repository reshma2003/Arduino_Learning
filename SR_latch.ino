int S, R;
int Q = 0;     
int NQ = 1;

void setup() {
  pinMode(3, INPUT);  
  pinMode(4, INPUT);   
  pinMode(7, OUTPUT);  
  pinMode(8, OUTPUT);  
}

void loop() {
  S = digitalRead(3);
  R = digitalRead(4);

  
  if (S == 1 && R == 0) {
    Q = 1;        
  } 
  else if (S == 0 && R == 1) {
    Q = 0;        
  }
 
  NQ = !Q;

  digitalWrite(7, Q);
  digitalWrite(8, NQ);
}
