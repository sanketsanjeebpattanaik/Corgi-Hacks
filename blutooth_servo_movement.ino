#include <Servo.h> 

int servoPin1 = 5; 
int servoPin2 = 6; 

Servo Servo1,Servo2;

void setup() { 
   Serial.begin(9600);
   Servo1.attach(servoPin1);
   Servo2.attach(servoPin2);
}

char c;
String voice;

void loop() {

  if (Serial.available()>0)
  {
    voice="";
    voice=Serial.readString();
    Serial.print(voice+'\n');
  }

  if(voice=="hello")
  {
    Servo1.write(90);
    delay(1000);
  } else if(voice=="bye")
  {
    Servo1.write(0);
    delay(1000);
  }

    if(voice=="start")
  {
    Servo2.write(90);
    delay(1000);
  } else if(voice=="stop")
  {
    Servo2.write(0);
    delay(1000);
  }


}
