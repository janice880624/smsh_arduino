int ledpin = 8;
void setup()
{
  pinMode(ledpin, OUTPUT);
}

void loop()
{
  digitalWrite(ledpin, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(ledpin, LOW);
  delay(1000);
}
