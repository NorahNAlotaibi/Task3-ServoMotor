#include <Servo.h>
Servo motor1;
Servo motor2;

void setup() {
  // put your setup code here, to run once:
 motor1.attach(13);
 motor2.attach(3);
}

void loop() {
  // put your main code here, to run repeatedly:
 motor1.writeMicroseconds(1300); //1300=clockwise
 delay(2000);
 motor1 .writeMicroseconds(1700); //1700=counterClockWise
 delay(2000);
   //motor1 .detach();  //stops the motor
 motor2.writeMicroseconds(1300); //1300=clockwise
 delay(2000);
 motor2 .writeMicroseconds(1700); //1700=counterClockWise
 delay(2000);
   //motor2 .detach(); //stops the motor
}
