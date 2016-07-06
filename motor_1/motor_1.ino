
#include <Motor_Shield.h> // include motor driver lib for using motor fuctions

int i,j;
DCMotor Amotor(1);        // creating objects.  
DCMotor Bmotor(2);
DCMotor Cmotor(3);
DCMotor Dmotor(4);

void setup() {
  

}

void loop() 
{
  
   Dmotor.run(BACKWARD);
   Dmotor.setSpeed(255);
   delay(10);

   Cmotor.run(BACKWARD);
   Cmotor.setSpeed(255);
   delay(10);
  /*for(i=0;i<=255;i++)
  {
      Forward(i);
      delay(10);
  }
  
  for(i;i>=1;i--)
  {
      Forward(i);
      delay(10);
  }
  for(j=0;j<=255;j++)
  {
      Backward(j);
      delay(10);
  }
  
  for(j;j>=1;j--)
  {
      Backward(j);
      delay(10);
  }
  
  Left();
  delay(3000);
  Right();
  delay(3000);*/
}

////*******Robot control functions********////
void Forward(unsigned char Speed)     // Robot runs in forward direction
{
            Amotor.run(FORWARD);
            Bmotor.run(FORWARD);
            Cmotor.run(FORWARD);
            Dmotor.run(FORWARD);
            Amotor.setSpeed(Speed);                             
            Bmotor.setSpeed(Speed);
            Cmotor.setSpeed(Speed);
            Dmotor.setSpeed(Speed);
}

void Backward(unsigned char Speed)  // Robot runs in backward direction  
{
            Amotor.run(BACKWARD);
            Bmotor.run(BACKWARD);
            Cmotor.run(BACKWARD);
            Dmotor.run(BACKWARD);
            Amotor.setSpeed(Speed);                             
            Bmotor.setSpeed(Speed);
            Cmotor.setSpeed(Speed);
            Dmotor.setSpeed(Speed);
}

void Right(void)                      // Skid steer left turn.
{
           Amotor.run(FORWARD);
           Cmotor.run(BACKWARD);
           Bmotor.run(BACKWARD);
           Dmotor.run(FORWARD);
           Amotor.setSpeed(255);                             
           Bmotor.setSpeed(255);
           Cmotor.setSpeed(255);
           Dmotor.setSpeed(255); 
}

void Left(void)                      // Skid steer right turn.
{
           Amotor.run(BACKWARD);
           Cmotor.run(FORWARD);
           Bmotor.run(FORWARD);
           Dmotor.run(BACKWARD); 
           Amotor.setSpeed(255);                             
           Bmotor.setSpeed(255);
           Cmotor.setSpeed(255);
           Dmotor.setSpeed(255);   
}

void Right_Forward()                // Right side motor forward
{
          Amotor.run(FORWARD);
          Dmotor.run(FORWARD);
          Amotor.setSpeed(255);
          Dmotor.setSpeed(255);   
}

void Right_Backward()              // Right side motor backward
{
          Amotor.run(BACKWARD);
          Dmotor.run(BACKWARD);
          Amotor.setSpeed(255);
          Dmotor.setSpeed(255);   
}
  
void Left_Forward()                // Left side motor forward
{
          Bmotor.run(FORWARD);
          Cmotor.run(FORWARD);
          Bmotor.setSpeed(255);
          Cmotor.setSpeed(255);   
}

void Left_Backward()               // Left side motor backward
{
          Bmotor.run(BACKWARD);
          Cmotor.run(BACKWARD);
          Bmotor.setSpeed(255);
          Cmotor.setSpeed(255);   
}
    
 void Stop(void)              // All motor halt   
{
          Amotor.setSpeed(0);
          Bmotor.setSpeed(0);
          Cmotor.setSpeed(0);
          Dmotor.setSpeed(0);
}


