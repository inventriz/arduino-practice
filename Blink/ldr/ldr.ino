int LDRpin = 0; //Connect analog interface photoresistor to pin 0
int ledpin = 8; //Define digital interface to adjust LED brightness using PWM output at pin 11
int val = 0; //variable to store analog value intialised to 0.
void setup()
{
  pinMode(ledpin, OUTPUT); //Define digital pin 11 as output
  Serial.begin(9600);//Set baudrate to 9600
}
void loop()
{
  val = analogRead(LDRpin); //Read analog sensor values ​​and assign it to val
  Serial.println(val);//Print analog value on Serial monitor
  if(val > 500){
    digitalWrite(ledpin, HIGH);
  } else {
    digitalWrite(ledpin, LOW);
  }
  //analogWrite(ledpin, val / 4); //  Set Led brightness according to analog value, max value 255
  delay(10);//delay 0.01 sec
}


