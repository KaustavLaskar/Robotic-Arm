#include<Servo.h>


Servo myServobase;
Servo myServoshoulder;
Servo myServowrist;
Servo myServoelbow;
Servo myServoGripper;




int base = A0;
int shoulder = A1;
int wrist = A2;
int elbow = A3;
int gripper = A4;



int baseval;
int shoulderval;
int wristval;
int elbowval;
int gripperval;



void setup(){
  Serial.begin(9600);
  myServobase.attach(9);
  myServoshoulder.attach(3);
  myServowrist.attach(5);
  myServoelbow.attach(6);
  myServoGripper.attach(11);
}

void loop(){
  baseval = analogRead(base);
  baseval = map(baseval, 0, 1023, 0, 125);
  myServobase.write(baseval);
  //Serial.println(baseval);
  delay(0);


  shoulderval = analogRead(shoulder);
  shoulderval = map(shoulderval, 0, 1023, 0, 180);
  //Serial.println(shoulderval);
  myServoshoulder.write(shoulderval);
  //Serial.println(shoulderval);
  delay(0);

  wristval = analogRead(wrist);
  wristval = map(wristval, 0, 1023, 0, 180);
  myServowrist.write(wristval);
  //Serial.println(wristval);
  delay(0);


  elbowval = analogRead(elbow);
  elbowval = map(elbowval, 0, 1023, 0, 120);
  myServoelbow.write(elbowval);
  //Serial.println(elbowval);
  delay(0);

  gripperval = analogRead(gripper);
  gripperval = map(gripperval, 0, 1023,30,120);
  myServoGripper.write(gripperval);
  //Serial.println(gripperval);
  delay(0);

}