int I0, I1, I2, I3;
int S0, S1;
int Y;

void setup() {
  // Select lines
  pinMode(3, INPUT);   // S0
  pinMode(4, INPUT);   // S1

  // Data inputs
  pinMode(6, INPUT);   // I0
  pinMode(7, INPUT);   // I1
  pinMode(8, INPUT);   // I2
  pinMode(9, INPUT);   // I3

  // Output
  pinMode(10, OUTPUT); // Y
}

void loop() {
  // Read select lines
  S0 = digitalRead(3);
  S1 = digitalRead(4);

  // Read inputs
  I0 = digitalRead(6);
  I1 = digitalRead(7);
  I2 = digitalRead(8);
  I3 = digitalRead(9);

  // 4:1 Multiplexer logic
  Y = (!S1 && !S0 && I0) ||
      (!S1 &&  S0 && I1) ||
      ( S1 && !S0 && I2) ||
      ( S1 &&  S0 && I3);

  // Output to LED
  digitalWrite(10, Y);
}
