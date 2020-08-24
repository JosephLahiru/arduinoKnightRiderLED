
int LEDs[] = {3, 4, 5, 6, 7, 8, 9, 10};

void setup()
{
  Serial.begin(9600);
  Serial.println("KNIGHT RIDER CIRCUIT CODE");

  for (int i = 0; i < 8; i++ )
  {
    pinMode(LEDs[i], OUTPUT);
  }
}

void loop()
{
  for ( int i = 0; i < 8; i++ )
  {
    digitalWrite(LEDs[i], HIGH);
    delay(100);
    digitalWrite(LEDs[i], LOW);
    delay(1);
  }
  for ( int i = 7; i > 0; i-- )
  {
    digitalWrite(LEDs[i], HIGH);
    delay(100);
    digitalWrite(LEDs[i], LOW);
    delay(1);
  }
}
