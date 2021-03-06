#include <Servo.h> 

int servoPin1 = 5; 
int servoPin2 = 6; 
int sensorPin = A0; 
int val;

Servo Servo1,Servo2; 

void setup() { 
   
   pinMode(sensorPin,INPUT);
   Servo1.attach(servoPin1);
   Servo2.attach(servoPin2);
}
void loop(){ 
   val = digitalRead(sensorPin);
   if (val==0)
   {
       Servo1.write(0);
       Servo2.write(0); 
   }
   if (val==1)
   {
       Servo1.write(90);
       Servo2.write(90); 
   }
}
