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

void loop()
{
  while (Serial.available()>0)
  {
    voice="";
    voice=Serial.readString();
    Serial.print(voice+'\n');
    delay(10); //Delay added to make thing stable

char c = Serial.read(); //Conduct a serial read

if (c == '#')

{

break; //Exit the loop when the # is detected after the word

}

voice += c;

}

if (voice.length() > 0)

{
if(voice == "*hello")

{

Servo1.write(90); 

}

else if(voice == "*bye")

{

Servo1.write(0); 

}

else if(voice == "*start")

{

Servo2.write(90); 

}

else if(voice == "*stop")

{

Servo2.write(0); 

}
voice=""; //Reset variable

}

}
