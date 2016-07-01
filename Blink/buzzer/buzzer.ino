int buzzer=8; //Setting the IO pin buzzer is attached.
void setup() 
{ 
  pinMode(buzzer,OUTPUT);//Set Buzzer pin as output
} 
void loop() 
{ 
  unsigned char i,j;// Define variables

  digitalWrite(buzzer,HIGH);//buzzer On
  delay(100);//Delay 1ms 
  digitalWrite(buzzer,LOW);//buzzer Off
  delay(500);// Delay 1ms
 /* while(1) 
 { 
    for(i=0;i<100;i++)// sound of frequency 1
    { 
      digitalWrite(buzzer,HIGH);//buzzer On
      delay(100);//Delay 1ms 
      digitalWrite(buzzer,LOW);//buzzer Off
      delay(100);// Delay 1ms 
    } 
    for(i=0;i<100;i++)// sound of frequency 2
    { 
      digitalWrite(buzzer,HIGH);//buzzer On
      delay(2000);//Delay 2ms 
      digitalWrite(buzzer,LOW);//buzzer Off
      delay(2000);//Delay 2ms 
    } 
  } */
}

