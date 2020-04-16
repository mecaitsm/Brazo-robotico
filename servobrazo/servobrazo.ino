#include <Servo.h>



Servo servo_motor;
int potpin = 0;
int val;

void setup()
{
 	servomotor.attach(3);  
}

void loop()
{
	val = analogRead(potpin);
  	val = map(val, 0 , 1023, 0 , 180);
  	servomotor.write(val);
  	delay(15);
}
