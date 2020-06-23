int n=1;
int pinInterrupt=7;
int state=1;
void fuct()
{
  Serial.print(n);
  digitalWrite(10,LOW);
}
void setup()
{
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

}

void loop()
{
  attachInterrupt(digitalPinToInterrupt(pinInterrupt),fuct,CHANGE);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
   digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(1000); // Wait for 1000 millisecond(s) digitalWrite(2, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(1000); // Wait for 1000 millisecond(s) digitalWrite(2, LOW);
digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(1000); // Wait for 1000 millisecond(s) digitalWrite(2, LOW);
digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  delay(1000); // Wait for 1000 millisecond(s) digitalWrite(2, LOW);
digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  delay(1000); // Wait for 1000 millisecond(s) digitalWrite(2, LOW);
digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  delay(1000); // Wait for 1000 millisecond(s) digitalWrite(2, LOW);
digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  delay(1000); // Wait for 1000 millisecond(s) digitalWrite(2, LOW);
digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(1000); // Wait for 1000 millisecond(s) digitalWrite(2, LOW);
digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(1000); // Wait for 1000 millisecond(s) digitalWrite(2, LOW);

  
}

