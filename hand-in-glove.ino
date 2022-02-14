#include <Servo.h>

Servo myservo;
const int ledPin = 13;// we will turn the Pin 13 light on
void setup()
{
  pinMode(ledPin,OUTPUT);
  pinMode(4,INPUT);
  digitalWrite(4, HIGH);
  myservo.attach(9);
}
/******************************************/
void loop()
{
  int digitalVal = digitalRead(4);
  if(HIGH == digitalVal)
  {
    digitalWrite(ledPin,LOW);//turn the led off
    myservo.detach();
  }
  else
  {
    digitalWrite(ledPin,HIGH);//turn the led on
    myservo.attach(9);
    myservo.write(0);
  }
}
