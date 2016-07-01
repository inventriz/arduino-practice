int ledpin = 11; // definition digital interface
int inpin = 7; //Define the number 7 Interface
int val;//Define the variable val
boolean op;
void setup()
{
  pinMode(ledpin, OUTPUT); //Define led as Output
  pinMode(inpin, INPUT); //Button interface is defined as input
  op = HIGH;
}
void loop()
{
  val = digitalRead(inpin); //Read digitalpin 7 level value assigned to val
  if (val == HIGH) //Test button is pressed
  {
    if (op == HIGH) {
      digitalWrite(ledpin, LOW);
      op = LOW;
    }
    else {
      digitalWrite(ledpin, HIGH);
      op = HIGH;
    }

  }

}

