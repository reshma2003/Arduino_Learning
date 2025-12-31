int count = 0;

void setup() {
  for (int i = 8; i <= 11; i++)
    pinMode(i, OUTPUT);
}

void loop() {
  for (int i = 8; i <= 11; i++)
    digitalWrite(i, (count >> (i - 8)) & 1);

  count++;
  if (count > 15) count = 0;
  delay(1000);
}
