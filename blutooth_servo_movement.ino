#include <Servo.h> 
int servoPin1 = 5; 
int servoPin2 = 6; 
int IR = A0;
int LED = 8;

Servo Servo1,Servo2;

String voice;
int val;

void setup() 
{                                            // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(IR, INPUT);
  pinMode(LED, OUTPUT);
    Servo1.attach(servoPin1);
  Servo2.attach(servoPin2);

}



void loop() {
  val = digitalRead(IR);
 
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
    digitalWrite(LED,HIGH);
    delay(500);
    digitalWrite(LED,LOW);
    delay(500);
    digitalWrite(LED,HIGH);
    delay(500);
    digitalWrite(LED,LOW);
    delay(500);
    digitalWrite(LED,HIGH);
    delay(500);
    digitalWrite(LED,LOW);
    delay(500);

     }  
  else if(voice == "*bye")//  test                           
     {
    Servo1.write(0); 
     Servo2.write(90);  
     digitalWrite(LED,LOW);

     }
  else if(voice == "*cute")//  test                           
     {
    digitalWrite(LED,HIGH);
    delay(500);
    digitalWrite(LED,LOW);
    delay(500);
    digitalWrite(LED,HIGH);
    delay(500);
    digitalWrite(LED,LOW);
    delay(500);
    digitalWrite(LED,HIGH);
    delay(500);
    digitalWrite(LED,LOW);
    delay(500);

     }  
   }
voice=""; //Reset the variable after initiating
    }
