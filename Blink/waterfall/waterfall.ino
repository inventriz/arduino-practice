int BASE = 9 ; //LED connected to the first I / O pin

int NUM = 5;   //The number of LED 's

void setup()
{
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     pinMode(i, OUTPUT);   //Set the digital I / O pin as an output
   }
}

void loop()
{
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     digitalWrite(i, LOW);    //Set the digital I / O pin output is " LOW ", that gradually lights
     delay(200);        //Delayed
   }
   for (int i = 13; i > 8; i --) 
   {
     digitalWrite(i, HIGH);    //Set the digital I / O pin output is " HIGH ", that gradually lights
     delay(200);        //Delayed
   }  
}
