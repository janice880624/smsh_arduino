int Gpin = 6;
int Ypin = 5;
int Rpin = 4;
void setup()
{
  pinMode(Gpin , OUTPUT);
  pinMode(Ypin , OUTPUT);
  pinMode(Rpin , OUTPUT);
}

void loop()
{
  digitalWrite(Gpin , HIGH);
  digitalWrite(Ypin , HIGH);
  digitalWrite(Rpin , HIGH);
  delay(1000);
  digitalWrite(Gpin , LOW);
  digitalWrite(Ypin , LOW);
  digitalWrite(Rpin , LOW);
  delay(1000);
}
