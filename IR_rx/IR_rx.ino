#include <IRremote.h>      // Include the lib

int RECV_PIN = 2;

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
}

void loop() {
  if (irrecv.decode(&results)) {
    //Serial.println(results.value, HEX);
    if(results.value == 33441975){
      Serial.println("Start ::");
    } else if(results.value == 33454215){
      Serial.println("Stop ::");
    } 
    
    irrecv.resume(); // Receive the next value
    // 1 = 1FE50AF
    // 2 = 1FED827
    // 3 = 1FEF807
    // 4 = 1FE30CF
    // 5 = 1FEB04F
    // 6 = 1FE708F
    // 7 = 1FE00FF
    // 8 = 1FEF00F
    // 9 = 1FE9867
    // power = 1FE48B7/33441975
    // mute = 1FE7887/33454215
  }
  delay(100);
}


