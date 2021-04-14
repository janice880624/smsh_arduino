int ledpin = 3 ;
int buttonpin = 7 ;

void setup()
{
  pinMode(buttonpin, INPUT);
  pinMode(ledpin, OUTPUT);
}

void loop()
{
  if (digitalRead(buttonpin) == 0) {
    digitalWrite(ledpin, HIGH);
  } else {
    digitalWrite(ledpin, LOW);
  }
}
