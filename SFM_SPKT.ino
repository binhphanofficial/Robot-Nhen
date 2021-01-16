#include <Servo.h>
Servo servo2;
Servo servo1;

char state;// bluetooth

#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
#define SERVOMIN  125 // this is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX  575 // this is the 'maximum' pulse length count (out of 4096)
uint8_t servonum = 0;

void setup() {
  
  servo1.attach(2);
  servo2.attach(3);
 
  Serial.begin(9600);
  Serial.println("8 channel Servo test!");
  pwm.begin();
  pwm.setPWMFreq(60);  // Analog servos run at ~60 Hz updates
  delay(10);
}
void loop() {

  state = Serial.read();
   
switch (state) {
  case 'u':
    up();
    break;
  case 'd':
    down();
    break;
  case 'l':
    left();
    break;
  case 'r':
    right();
    break;
  case 'f':
    freeze();
    break;
    
  default: 
   break;

}
 
  
}
void freeze()
{
// đứng cao 50
    pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 500);
      pwm.setPWM(2, 0, 380);

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 410);
      pwm.setPWM(5, 0, 235);


      pwm.setPWM(6, 0, 290);
      pwm.setPWM(7, 0, 450);
      pwm.setPWM(8, 0, 220);
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 450);
      pwm.setPWM(14, 0, 370);

      pwm.setPWM(15, 0, 220);
      servo1.write(105);  
      servo2.write(115);  

      pwm.setPWM(9 , 0, 220);
      pwm.setPWM(10, 0, 470);
      pwm.setPWM(11, 0, 300);
      
delay(100);
}
void up()
{
float a = 100;
// dơ chân 1,3,5 = ẹo chân 2,4,6
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 400);//////////// 480
      pwm.setPWM(2, 0, 380);

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 410);
      pwm.setPWM(5, 0, 235);

      pwm.setPWM(6, 0, 290);
      pwm.setPWM(7, 0, 350);//////////// 430
      pwm.setPWM(8, 0, 220);
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 450);
      pwm.setPWM(14, 0, 370);

      pwm.setPWM(15, 0, 220);
      servo1.write(65);  /////////////// 95
      servo2.write(115);  

      pwm.setPWM(9 , 0, 220);
      pwm.setPWM(10, 0, 470);
      pwm.setPWM(11, 0, 300);
      
delay(a);
// quơ chân 1,3,5
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 400);//////////// 480
      pwm.setPWM(2, 0, 450);////// 380

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 410);
      pwm.setPWM(5, 0, 235);

      pwm.setPWM(6, 0, 290);
      pwm.setPWM(7, 0, 350);////////////// 430
      pwm.setPWM(8, 0, 270);////////////// 220
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 450);
      pwm.setPWM(14, 0, 370);

      pwm.setPWM(15, 0, 220);
      servo1.write(65);  ////////////////95
      servo2.write(85);  ////////////// 115

      pwm.setPWM(9 , 0, 220);
      pwm.setPWM(10, 0, 470);
      pwm.setPWM(11, 0, 300);
      
delay(a);
// hạ chạn 1,3,5
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 500);
      pwm.setPWM(2, 0, 450);//////// 380

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 410);
      pwm.setPWM(5, 0, 235);

      pwm.setPWM(6, 0, 290);
      pwm.setPWM(7, 0, 450);
      pwm.setPWM(8, 0, 270);////// 220
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 450);
      pwm.setPWM(14, 0, 370);

      pwm.setPWM(15, 0, 220);
      servo1.write(110);  
      servo2.write(85);  ////// 115

      pwm.setPWM(9 , 0, 220);
      pwm.setPWM(10, 0, 470);
      pwm.setPWM(11, 0, 300);
      
delay(a);
// dở chân 2,4,6
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 500);
      pwm.setPWM(2, 0, 450);//////// 380 

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 310);///////////////////390
      pwm.setPWM(5, 0, 235);

      pwm.setPWM(6, 0, 310);
      pwm.setPWM(7, 0, 450);
      pwm.setPWM(8, 0, 270);/////////// 220
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 350);//////////////////430
      pwm.setPWM(14, 0, 370);

      pwm.setPWM(15, 0, 220);
      servo1.write(110);  
      servo2.write(85);  ///////////// 115

      pwm.setPWM(9 , 0, 220);
      pwm.setPWM(10, 0, 370);////////////////// 450
      pwm.setPWM(11, 0, 300);
      
delay(a);
// ẹo chân 1,3,5
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 500);
      pwm.setPWM(2, 0, 380);

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 310);///////////// 390
      pwm.setPWM(5, 0, 235);

      pwm.setPWM(6, 0, 290);
      pwm.setPWM(7, 0, 450);
      pwm.setPWM(8, 0, 220);
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 350);/////////// 430
      pwm.setPWM(14, 0, 370);

      pwm.setPWM(15, 0, 220);
      servo1.write(110);  
      servo2.write(115);  

      pwm.setPWM(9 , 0, 230);
      pwm.setPWM(10, 0, 370);///////////// 450
      pwm.setPWM(11, 0, 300);
      
delay(a);
// quơ chân 2,4,6
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 500);
      pwm.setPWM(2, 0, 380);

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 270);////////////// 390
      pwm.setPWM(5, 0, 285);//// 235


      pwm.setPWM(6, 0, 290);
      pwm.setPWM(7, 0, 450);
      pwm.setPWM(8, 0, 220);
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 350);//////////// 430
      pwm.setPWM(14, 0, 320);//// 370

      pwm.setPWM(15, 0, 220);
      servo1.write(110);  
      servo2.write(115);  

      pwm.setPWM(9 , 0, 220);
      pwm.setPWM(10, 0, 370);///////////////// 450
      pwm.setPWM(11, 0, 280);/////// 300
      
delay(a);
// hạ chân 2,4,6
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 500);
      pwm.setPWM(2, 0, 380);

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 410);
      pwm.setPWM(5, 0, 285);//////// 235

      pwm.setPWM(6, 0, 290);
      pwm.setPWM(7, 0, 450);
      pwm.setPWM(8, 0, 220);
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 450);
      pwm.setPWM(14, 0, 320);/////////// 370

      pwm.setPWM(15, 0, 220);
      servo1.write(110);  
      servo2.write(115);  

      pwm.setPWM(9 , 0, 220);
      pwm.setPWM(10, 0, 470);
      pwm.setPWM(11, 0, 280);///////// 300
      
delay(a);
// dở chân 1,3,5
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 400);////// 480
      pwm.setPWM(2, 0, 380);

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 410);
      pwm.setPWM(5, 0, 285);


      pwm.setPWM(6, 0, 290);
      pwm.setPWM(7, 0, 350);/////////// 430
      pwm.setPWM(8, 0, 220);
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 450);
      pwm.setPWM(14, 0, 320);

      pwm.setPWM(15, 0, 220);
      servo1.write(65);  /////////// 95
      servo2.write(115);  

      pwm.setPWM(9 , 0, 220);
      pwm.setPWM(10, 0, 470);
      pwm.setPWM(11, 0, 280);
      

delay(a);
}
void down()
{
float a = 100;

// dơ chân 1,3,5 = ẹo chân 2,4,6
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 400);//////////// 480
      pwm.setPWM(2, 0, 380);

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 410);
      pwm.setPWM(5, 0, 235);

      pwm.setPWM(6, 0, 290);
      pwm.setPWM(7, 0, 350);//////////// 430
      pwm.setPWM(8, 0, 220);
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 450);
      pwm.setPWM(14, 0, 370);

      pwm.setPWM(15, 0, 220);
      servo1.write(65);  /////////////// 95
      servo2.write(115);  

      pwm.setPWM(9 , 0, 220);
      pwm.setPWM(10, 0, 470);
      pwm.setPWM(11, 0, 300);
      
delay(a);
// quơ chân 1,3,5
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 400);//////////// 480
      pwm.setPWM(2, 0, 310);////// 380

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 410);
      pwm.setPWM(5, 0, 235);

      pwm.setPWM(6, 0, 290);
      pwm.setPWM(7, 0, 350);////////////// 430
      pwm.setPWM(8, 0, 170);////////////// 220
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 450);
      pwm.setPWM(14, 0, 370);

      pwm.setPWM(15, 0, 220);
      servo1.write(65);  ////////////////95
      servo2.write(145);  ////////////// 115

      pwm.setPWM(9 , 0, 220);
      pwm.setPWM(10, 0, 470);
      pwm.setPWM(11, 0, 300);
      
delay(a);
// hạ chạn 1,3,5
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 500);
      pwm.setPWM(2, 0, 310);//////// 380

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 410);
      pwm.setPWM(5, 0, 235);

      pwm.setPWM(6, 0, 290);
      pwm.setPWM(7, 0, 450);
      pwm.setPWM(8, 0, 170);////// 220
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 450);
      pwm.setPWM(14, 0, 370);

      pwm.setPWM(15, 0, 220);
      servo1.write(110);  
      servo2.write(145);  ////// 115

      pwm.setPWM(9 , 0, 220);
      pwm.setPWM(10, 0, 470);
      pwm.setPWM(11, 0, 300);
      
delay(a);
// dở chân 2,4,6
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 500);
      pwm.setPWM(2, 0, 310);//////// 380 

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 310);///////////////////390
      pwm.setPWM(5, 0, 235);

      pwm.setPWM(6, 0, 310);
      pwm.setPWM(7, 0, 450);
      pwm.setPWM(8, 0, 170);/////////// 220
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 350);//////////////////430
      pwm.setPWM(14, 0, 370);

      pwm.setPWM(15, 0, 220);
      servo1.write(110);  
      servo2.write(145);  ///////////// 115

      pwm.setPWM(9 , 0, 220);
      pwm.setPWM(10, 0, 370);////////////////// 450
      pwm.setPWM(11, 0, 300);
      
delay(a);
// ẹo chân 1,3,5
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 500);
      pwm.setPWM(2, 0, 380);

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 310);///////////// 390
      pwm.setPWM(5, 0, 235);

      pwm.setPWM(6, 0, 290);
      pwm.setPWM(7, 0, 450);
      pwm.setPWM(8, 0, 220);
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 350);/////////// 430
      pwm.setPWM(14, 0, 370);

      pwm.setPWM(15, 0, 220);
      servo1.write(110);  
      servo2.write(115);  

      pwm.setPWM(9 , 0, 230);
      pwm.setPWM(10, 0, 370);///////////// 450
      pwm.setPWM(11, 0, 300);
      

delay(a);
// quơ chân 2,4,6
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 500);
      pwm.setPWM(2, 0, 380);

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 270);
      pwm.setPWM(5, 0, 185);//// 235

      pwm.setPWM(6, 0, 290);
      pwm.setPWM(7, 0, 450);
      pwm.setPWM(8, 0, 220);
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 350);
      pwm.setPWM(14, 0, 420);//// 370

      pwm.setPWM(15, 0, 220);
      servo1.write(110);  
      servo2.write(115);  

      pwm.setPWM(9 , 0, 220);
      pwm.setPWM(10, 0, 370);
      pwm.setPWM(11, 0, 350);/////// 300
      
delay(a);
// hạ chân 2,4,6
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 500);
      pwm.setPWM(2, 0, 380);

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 410);
      pwm.setPWM(5, 0, 185);//////// 235

      pwm.setPWM(6, 0, 290);
      pwm.setPWM(7, 0, 450);
      pwm.setPWM(8, 0, 220);
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 450);
      pwm.setPWM(14, 0, 420);/////////// 370

      pwm.setPWM(15, 0, 220);
      servo1.write(110);  
      servo2.write(115);  

      pwm.setPWM(9 , 0, 220);
      pwm.setPWM(10, 0, 470);
      pwm.setPWM(11, 0, 350);///////// 300
      
delay(a);
// dở chân 1,3,5
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 400);////// 480
      pwm.setPWM(2, 0, 380);

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 410);
      pwm.setPWM(5, 0, 185);

      pwm.setPWM(6, 0, 290);
      pwm.setPWM(7, 0, 350);/////////// 430
      pwm.setPWM(8, 0, 220);
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 450);
      pwm.setPWM(14, 0, 4200);

      pwm.setPWM(15, 0, 220);
      servo1.write(65);  /////////// 95
      servo2.write(115);  

      pwm.setPWM(9 , 0, 220);
      pwm.setPWM(10, 0, 470);
      pwm.setPWM(11, 0, 350);
      
   delay(a);
   }
void left()
{
float a = 100;


// dơ chân 1,3,5 = ẹo chân 2,4,6
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 400);//////////// 480
      pwm.setPWM(2, 0, 380);

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 410);
      pwm.setPWM(5, 0, 235);

      pwm.setPWM(6, 0, 290);
      pwm.setPWM(7, 0, 350);//////////// 430
      pwm.setPWM(8, 0, 220);
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 450);
      pwm.setPWM(14, 0, 370);

      pwm.setPWM(15, 0, 220);
      servo1.write(65);  /////////////// 95
      servo2.write(115);  

      pwm.setPWM(9 , 0, 220);
      pwm.setPWM(10, 0, 470);
      pwm.setPWM(11, 0, 300);
      
delay(a);
// quơ chân 1,3,5
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 400);//////////// 480
      pwm.setPWM(2, 0, 310);////// 380

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 410);
      pwm.setPWM(5, 0, 235);


      pwm.setPWM(6, 0, 290);
      pwm.setPWM(7, 0, 350);////////////// 430
      pwm.setPWM(8, 0, 170);////////////// 220
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 450);
      pwm.setPWM(14, 0, 370);

      pwm.setPWM(15, 0, 220);
      servo1.write(65);  ////////////////95
      servo2.write(85);  ////////////// 115

      pwm.setPWM(9 , 0, 220);
      pwm.setPWM(10, 0, 470);
      pwm.setPWM(11, 0, 300);
      
delay(a);
// hạ chạn 1,3,5
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 500);
      pwm.setPWM(2, 0, 310);//////// 380

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 410);
      pwm.setPWM(5, 0, 235);

      pwm.setPWM(6, 0, 290);
      pwm.setPWM(7, 0, 450);
      pwm.setPWM(8, 0, 170);////// 220
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 450);
      pwm.setPWM(14, 0, 370);

      pwm.setPWM(15, 0, 220);
      servo1.write(110);  
      servo2.write(85);  ////// 115

      pwm.setPWM(9 , 0, 220);
      pwm.setPWM(10, 0, 470);
      pwm.setPWM(11, 0, 300);
      
delay(a);
// dở chân 2,4,6
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 500);
      pwm.setPWM(2, 0, 310);//////// 380 

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 310);///////////////////390
      pwm.setPWM(5, 0, 235);

      pwm.setPWM(6, 0, 310);
      pwm.setPWM(7, 0, 450);
      pwm.setPWM(8, 0, 170);/////////// 220
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 350);//////////////////430
      pwm.setPWM(14, 0, 370);

      pwm.setPWM(15, 0, 220);
      servo1.write(110);  
      servo2.write(85);  ///////////// 115

      pwm.setPWM(9 , 0, 220);
      pwm.setPWM(10, 0, 370);////////////////// 450
      pwm.setPWM(11, 0, 300);
      
delay(a);
// ẹo chân 1,3,5
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 500);
      pwm.setPWM(2, 0, 380);

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 310);///////////// 390
      pwm.setPWM(5, 0, 235);

      pwm.setPWM(6, 0, 290);
      pwm.setPWM(7, 0, 450);
      pwm.setPWM(8, 0, 220);
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 350);/////////// 430
      pwm.setPWM(14, 0, 370);

      pwm.setPWM(15, 0, 220);
      servo1.write(110);  
      servo2.write(115);  

      pwm.setPWM(9 , 0, 230);
      pwm.setPWM(10, 0, 370);///////////// 450
      pwm.setPWM(11, 0, 300);
      
delay(a);
// quơ chân 2,4,6
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 500);
      pwm.setPWM(2, 0, 380);

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 270);////////////// 390
      pwm.setPWM(5, 0, 185);//// 235

      pwm.setPWM(6, 0, 290);
      pwm.setPWM(7, 0, 450);
      pwm.setPWM(8, 0, 220);
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 350);//////////// 430
      pwm.setPWM(14, 0, 320);//// 370

      pwm.setPWM(15, 0, 220);
      servo1.write(110);  
      servo2.write(115);  

      pwm.setPWM(9 , 0, 220);
      pwm.setPWM(10, 0, 370);///////////////// 450
      pwm.setPWM(11, 0, 250);/////// 300
      
delay(a);
// hạ chân 2,4,6
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 500);
      pwm.setPWM(2, 0, 380);

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 410);
      pwm.setPWM(5, 0, 185);//////// 235


      pwm.setPWM(6, 0, 290);
      pwm.setPWM(7, 0, 450);
      pwm.setPWM(8, 0, 220);
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 450);
      pwm.setPWM(14, 0, 320);/////////// 370

      pwm.setPWM(15, 0, 220);
      servo1.write(110);  
      servo2.write(115);  

      pwm.setPWM(9 , 0, 220);
      pwm.setPWM(10, 0, 470);
      pwm.setPWM(11, 0, 250);///////// 300
      

delay(a);
// dở chân 1,3,5
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 400);////// 480
      pwm.setPWM(2, 0, 380);

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 410);
      pwm.setPWM(5, 0, 185);

      pwm.setPWM(6, 0, 290);
      pwm.setPWM(7, 0, 350);/////////// 430
      pwm.setPWM(8, 0, 220);
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 450);
      pwm.setPWM(14, 0, 320);

      pwm.setPWM(15, 0, 220);
      servo1.write(65);  /////////// 95
      servo2.write(115);  

      pwm.setPWM(9 , 0, 220);
      pwm.setPWM(10, 0, 470);
      pwm.setPWM(11, 0, 250);
      
delay(a);
}

void right()// queo phải
{
float a = 100;
// dơ chân 1,3,5 = ẹo chân 2,4,6
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 400);//////////// 480
      pwm.setPWM(2, 0, 380);

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 410);
      pwm.setPWM(5, 0, 235);

      pwm.setPWM(6, 0, 290);
      pwm.setPWM(7, 0, 350);//////////// 430
      pwm.setPWM(8, 0, 220);
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 450);
      pwm.setPWM(14, 0, 370);

      pwm.setPWM(15, 0, 220);
      servo1.write(65);  /////////////// 95
      servo2.write(115);  

      pwm.setPWM(9 , 0, 220);
      pwm.setPWM(10, 0, 470);
      pwm.setPWM(11, 0, 300);
      
delay(a);
// quơ chân 1,3,5
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 400);//////////// 480
      pwm.setPWM(2, 0, 450);////// 380

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 410);
      pwm.setPWM(5, 0, 235);

      pwm.setPWM(6, 0, 290);
      pwm.setPWM(7, 0, 350);////////////// 430
      pwm.setPWM(8, 0, 270);////////////// 220
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 450);
      pwm.setPWM(14, 0, 370);

      pwm.setPWM(15, 0, 220);
      servo1.write(65);  ////////////////95
      servo2.write(145);  ////////////// 115

      pwm.setPWM(9 , 0, 220);
      pwm.setPWM(10, 0, 470);
      pwm.setPWM(11, 0, 300);
      
delay(a);
// hạ chạn 1,3,5
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 500);
      pwm.setPWM(2, 0, 450);//////// 380

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 410);
      pwm.setPWM(5, 0, 235);

      pwm.setPWM(6, 0, 290);
      pwm.setPWM(7, 0, 450);
      pwm.setPWM(8, 0, 270);////// 220
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 450);
      pwm.setPWM(14, 0, 370);

      pwm.setPWM(15, 0, 220);
      servo1.write(110);  
      servo2.write(145);  ////// 115

      pwm.setPWM(9 , 0, 220);
      pwm.setPWM(10, 0, 470);
      pwm.setPWM(11, 0, 300);
      
delay(a);
// dở chân 2,4,6
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 500);
      pwm.setPWM(2, 0, 450);//////// 380 

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 310);///////////////////390
      pwm.setPWM(5, 0, 235);


      pwm.setPWM(6, 0, 310);
      pwm.setPWM(7, 0, 450);
      pwm.setPWM(8, 0, 270);/////////// 220
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 350);//////////////////430
      pwm.setPWM(14, 0, 370);

      pwm.setPWM(15, 0, 220);
      servo1.write(110);  
      servo2.write(145);  ///////////// 115

      pwm.setPWM(9 , 0, 220);
      pwm.setPWM(10, 0, 370);////////////////// 450
      pwm.setPWM(11, 0, 300);
      
delay(a);
// ẹo chân 1,3,5
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 500);
      pwm.setPWM(2, 0, 380);

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 310);///////////// 390
      pwm.setPWM(5, 0, 235);

      pwm.setPWM(6, 0, 290);
      pwm.setPWM(7, 0, 450);
      pwm.setPWM(8, 0, 220);
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 350);/////////// 430
      pwm.setPWM(14, 0, 370);

      pwm.setPWM(15, 0, 220);
      servo1.write(110);  
      servo2.write(115);  

      pwm.setPWM(9 , 0, 230);
      pwm.setPWM(10, 0, 370);///////////// 450
      pwm.setPWM(11, 0, 300);
      

delay(a);
// quơ chân 2,4,6
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 500);
      pwm.setPWM(2, 0, 380);

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 270);
      pwm.setPWM(5, 0, 285);//// 235

      pwm.setPWM(6, 0, 290);
      pwm.setPWM(7, 0, 450);
      pwm.setPWM(8, 0, 220);
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 350);
      pwm.setPWM(14, 0, 420);//// 370

      pwm.setPWM(15, 0, 220);
      servo1.write(110);  
      servo2.write(115);  

      pwm.setPWM(9 , 0, 220);
      pwm.setPWM(10, 0, 370);
      pwm.setPWM(11, 0, 350);/////// 300
      

delay(a);
// hạ chân 2,4,6
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 500);
      pwm.setPWM(2, 0, 380);

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 410);
      pwm.setPWM(5, 0, 285);//////// 235

      pwm.setPWM(6, 0, 290);
      pwm.setPWM(7, 0, 450);
      pwm.setPWM(8, 0, 220);
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 450);
      pwm.setPWM(14, 0, 420);/////////// 370

      pwm.setPWM(15, 0, 220);
      servo1.write(110);  
      servo2.write(115);  

      pwm.setPWM(9 , 0, 220);
      pwm.setPWM(10, 0, 470);
      pwm.setPWM(11, 0, 350);///////// 300
      
delay(a);
// dở chân 1,3,5
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 400);////// 480
      pwm.setPWM(2, 0, 380);

      pwm.setPWM(3, 0, 250);
      pwm.setPWM(4, 0, 410);
      pwm.setPWM(5, 0, 285);

      pwm.setPWM(6, 0, 290);
      pwm.setPWM(7, 0, 350);/////////// 430
      pwm.setPWM(8, 0, 220);
      
      pwm.setPWM(12, 0, 250);
      pwm.setPWM(13, 0, 450);
      pwm.setPWM(14, 0, 420);

      pwm.setPWM(15, 0, 220);
      servo1.write(65);  /////////// 95
      servo2.write(115);  

      pwm.setPWM(9 , 0, 220);
      pwm.setPWM(10, 0, 470);
      pwm.setPWM(11, 0, 350);
      
delay(a);
}



