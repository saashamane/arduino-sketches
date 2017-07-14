#include <Servo.h>
Servo servoLeft;
Servo servoRight;

//move forwards: 1700, 1300
//turn left: 1300, 1300
//turn right: 1700, 1700
//move backwards: 1300, 1700

void hop (int degree1, int degree2, int degree3) { 
  servoLeft.writeMicroseconds(degree1);         
  servoRight.writeMicroseconds(degree2);       
  delay(degree3);                            
}

void setup() {
  // put your setup code here, to run once:
  servoLeft.attach(13);
  servoRight.attach(12);
}

void loop() {
  // put your main code here, to run repeatedly:
hop(1700,1300,1400);//forwards, because I'm
hop(1650,1700,760);//right, eight
hop(1300,1300,760);//left, teen
hop(1300,1700,1400);//back, and I still
hop(1700,1700,1900); //right, live with my parents
hop(1300,1300,1350);//left, yeah they're not
hop(1300,1700,660);//back, like
hop(1500,1500,230);//STOP 
hop(1300,1700,660);//back, yours
hop(1700,1700,950);//right, well yours 
hop(1700,1300,980);//left, are more
hop(1300,1300,810);//right, under
hop(1700,1300,980);//left, standing 
hop(1700,1300,1130);//forwards, I've never
hop(1700,1700,1450);//right, fell in love 
hop(1700,1700,1410);//right, I saved those
hop(1700,1300,1780);//left, feelings for you
hop(1700,1300,1700);//forwards,so let's do all the
hop(1300,1700,1400);//back, stupid shit that young 
hop(1700,1300,680);//forwards, kids
hop(1300,1700,670);//back, do
}
