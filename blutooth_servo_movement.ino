#include <Servo.h> 
int servoPin1 = 5; 
int servoPin2 = 6; 

Servo Servo1,Servo2;

String voice;


void setup() 
{                                            // put your setup code here, to run once:
  Serial.begin(9600);
    Servo1.attach(servoPin1);
  Servo2.attach(servoPin2);

}

  int redVal;
  int greenVal;
  int blueVal;


void loop() {
 
  while (Serial.available())   //Check if there is an available byte to read
  {                            
  delay(10);                   //Delay added to make thing stable
  char c = Serial.read();      //Conduct a serial read
  if (c == '#') {break;}       //Exit the loop when the # is detected after the word
  voice += c;                  //Shorthand for voice = voice + c
  } 

  if (voice.length() > 0) {
    Serial.println(voice);


       if(voice == "*hi")//       test                        
     {

    Servo1.write(90); 
    Servo2.write(0); 

     }  
  else if(voice == "*bye")//  test                           
     {
    Servo1.write(0); 
     Servo2.write(90);  

     }
  
   }
voice=""; //Reset the variable after initiating
}
