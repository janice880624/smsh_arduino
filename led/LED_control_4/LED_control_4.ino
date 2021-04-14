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
  // 紅燈亮
  digitalWrite(Gpin , LOW);
  digitalWrite(Ypin , LOW);
  digitalWrite(Rpin , HIGH);
  delay(3000);

  // 黃燈閃
  digitalWrite(Gpin, LOW);
  digitalWrite(Ypin, HIGH);
  digitalWrite(Rpin, LOW);
  for (counter = 0; counter < 3; ++counter) {
    digitalWrite(Ypin, LOW);
    delay(500);
    digitalWrite(Ypin, HIGH);
    delay(500);
  }

  // 綠燈亮
  digitalWrite(Gpin , HIGH);
  digitalWrite(Ypin , LOW);
  digitalWrite(Rpin , LOW);
  delay(3000);
}
