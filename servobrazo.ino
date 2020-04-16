#include <Servo.h>



Servo servo_motor;
int potpin = 0;
int val;



void setup()
{
 	servo_motor.attach(3);
  
}

void loop()
{
	val = analogRead(potpin);
  	val = map(val, 0 , 1023, 0 , 180);
  	servo_motor.write(val);
  	delay(15);
}