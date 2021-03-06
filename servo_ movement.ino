// Include the Servo library 
#include <Servo.h> 
// Declare the Servo pin 
int servoPin1 = 3; 
int servoPin2 = 3; 
int servoPin3 = 3; 
int servoPin4 = 3; 
int servoPin5 = 3; 
int servoPin6 = 3; 
// Create a servo object 
Servo Servo1,Servo2,Servo3,Servo4,Servo5,Servo6; 
void setup() { 
   // We need to attach the servo to the used pin number 
   Servo1.attach(servoPin1);
   Servo2.attach(servoPin2);
   Servo3.attach(servoPin3);
   Servo4.attach(servoPin4);
   Servo5.attach(servoPin5);
   Servo6.attach(servoPin6);
}
void loop(){ 
   // Make servo go to 0 degrees 
   // Servo1.write(0); 
   // delay(1000); 
   // Make servo go to 90 degrees 
   // Servo1.write(90); 
   // delay(1000); 
   // Make servo go to 180 degrees 
   // Servo1.write(180); 
   // delay(1000); 

   //**** VALUES TO BE CHANGED ACCORDING TO MOVEMENT****

   // For Eyebrow Movement
   // Initial Condition
   Servo1.write(0);
   Servo2.write(0);
   delay(1000);
   // For Movement
   Servo1.write(90);
   Servo2.write(90); 
   delay(1000);

   // For Hands Movement
   // Initial Condition
   Servo3.write(0);
   Servo4.write(0);
   delay(1000);
   // For Movement
   Servo3.write(90);
   Servo4.write(90); 
   delay(1000);

   // For Legs Movement
   // Initial Condition
   Servo5.write(0);
   Servo6.write(0);
   delay(1000);
   // For Movement
   Servo5.write(90);
   Servo6.write(90); 
   delay(1000);
}
