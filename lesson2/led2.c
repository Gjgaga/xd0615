int i=0;
void setup()
{
  for(i=7;i>=0;i--)
  {
  pinMode(i, OUTPUT);
  }
}

void loop()
{
  for(i=7;i>=0;i--)
  {
  digitalWrite(i, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(i, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  }
}