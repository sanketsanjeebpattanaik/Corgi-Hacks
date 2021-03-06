#include <Servo.h> 

int servoPin1 = 3; 
int servoPin2 = 3; 
int servoPin3 = 3; 
int servoPin4 = 3; 
int servoPin5 = 3; 
int servoPin6 = 3; 
int sensorPin = 3; 
int val;

Servo Servo1,Servo2,Servo3,Servo4,Servo5,Servo6; 

void setup() { 
   
   pinMode(sensorPin,INPUT);
   Servo1.attach(servoPin1);
   Servo2.attach(servoPin2);
   Servo3.attach(servoPin3);
   Servo4.attach(servoPin4);
   Servo5.attach(servoPin5);
   Servo6.attach(servoPin6);
}
void loop(){ 
   val = digitalRead(sensorPin);
   if (val==0)
   {
       Servo1.write(0);
       Servo2.write(0); 
       Servo3.write(0);
       Servo4.write(0); 
       Servo5.write(0);
       Servo6.write(0); 
   }
   if (val==1)
   {
       Servo1.write(90);
       Servo2.write(90); 
       Servo3.write(90);
       Servo4.write(90); 
       Servo5.write(90);
       Servo6.write(90); 
   }
}
