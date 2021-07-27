// C++ code
//
void setup()
{
  pinMode(5, OUTPUT);
}

void loop()
{
  digitalWrite(5, HIGH);
  delay(30); // Wait for 1000 millisecond(s)
  digitalWrite(5, LOW);
  delay(100); // Wait for 1000 millisecond(s)
}
