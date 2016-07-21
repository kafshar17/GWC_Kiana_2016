#include <Servo.h> 
Servo servoRight;
Servo servoLeft;
int right_whisker = 5;
int left_whisker = 7;

void setup() {
  // put your setup code here, to run once:
pinMode(5, INPUT);
pinMode(7, INPUT);

servoLeft.attach(13);
servoRight.attach(12);
servoLeft.writeMicroseconds(1500);
servoRight.writeMicroseconds(1500);

}
void backwards(){
  servoRight.writeMicroseconds(1300);
  servoLeft.writeMicroseconds(1700);
  delay(1000);
}
void right(){
  servoRight.writeMicroseconds(1300);
  servoLeft.writeMicroseconds(1300);
  delay(1000);
}
void forwards(){
  servoRight.writeMicroseconds(1700);
  servoLeft.writeMicroseconds(1300);
  delay(1000);
}
void left(){
  servoRight.writeMicroseconds(1700);
  servoLeft.writeMicroseconds(1700);
  delay(1000);
}
void loop(){
  // put your main code here, to run repeatedly:
  left_whisker = digitalRead(7);
  right_whisker = digitalRead(5);
  if(left_whisker== 0 && right_whisker == 0)
  {
  backwards(); 
  right(); 
  }
  else if (left_whisker == 0){
  backwards();
  right();
  }
  else if (right_whisker == 0){
  backwards();
  left();
  }
  else 
  {
  forwards(); 
  }
}




