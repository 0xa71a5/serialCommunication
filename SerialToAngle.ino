#include <Servo.h>
Servo myservo;
int num=0;

void setup() {
  // put your setup code here, to run once:

Serial.begin(115200);
myservo.attach(3);//,800,1000);
myservo.write(90);
//pinMode(6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available())
{
  num=0;
  while(Serial.available())
  {
 char data;
 data=Serial.read();
 delay(2);
 num*=10;
 num+=data-'0';   }
}
Serial.print("Angle:   ");
Serial.println(num);
delay(100);
//myservo.write(num);
analogWrite(5,num);
analogWrite(6,0);



}
