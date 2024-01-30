const int servo = 15; //13 15--舵机
const int motorA =26; //电机A
const int motorB = 27;//电机B

const int freq = 50;//频率
const int resolution = 8;//分辨率

const int servo_channel = 0;//舵机
const int motorA_channel = 1;//电机A
const int motorB_channel = 2;//电机B



void setup() {
    //舵机
    ledcSetup(servo_channel,freq,resolution);
    ledcAttachPin(servo,servo_channel);
    //电机A
    ledcSetup(motorA_channel,freq,resolution);
    ledcAttachPin(motorA,motorA_channel);
    //电机B
    ledcSetup(motorB_channel,freq,resolution);
    ledcAttachPin(motorB,motorB_channel);
    
    /*初始化*/
    ledcWrite(servo_channel,22);
    ledcWrite(motorA_channel,0);
    ledcWrite(motorB_channel,0);
    }

void loop(){
  while (1){
    for(int a = 0;a <= 255;a=a+3){
      ledcWrite(motorA_channel,a);
      delay(93);
      }
    for(int a = 255;a >191 ;a--){
      ledcWrite(motorA_channel,a);
      ledcWrite(servo_channel,12);
      delay(29);
      }
    for(int a=191;a >127 ;a--){
      ledcWrite(motorA_channel,a);
      ledcWrite(servo_channel,7);
      delay(79.3);
      }
    for(int a=127;a<255;a++){
      ledcWrite(servo_channel,22);
      ledcWrite(motorA_channel,a);
      delay(50);
      }
        
    ledcWrite(motorA_channel,0);
    delay(500);

    for(int b=255;b > 127 ;b=b-1){
      ledcWrite(motorB_channel,b);
      ledcWrite(servo_channel,7);
      delay(35);
      }
    for(int b=127;b > 0 ;b=b-1){
      ledcWrite(motorB_channel,b);
      ledcWrite(servo_channel,22);
      delay(40);
      }
    ledcWrite(motorB_channel,0);
    delay(500);
    for(int a=0;a<127 ;a=a+1){
      ledcWrite(motorA_channel,a);
      ledcWrite(servo_channel,22);
      delay(34);
      }
    for(int a=127;a<255 ;a=a+1){
      ledcWrite(motorA_channel,a);
      ledcWrite(servo_channel,7);
      delay(36.1);
      }
    ledcWrite(motorA_channel,0);
    delay(200);
    ledcWrite(servo_channel,22);
    delay(300);
    for(int b=255;b > 0 ;b=b-3){
      ledcWrite(motorB_channel,b);
      delay(60);
      }
    ledcWrite(motorA_channel,255);
    delay(2200);
    for(int a=255;a >191 ;a--){
      ledcWrite(motorA_channel,a);
      ledcWrite(servo_channel,14);
      delay(20);
      }
    for(int a=191;a >127 ;a--){
      ledcWrite(motorA_channel,a);
      ledcWrite(servo_channel,7);
      delay(80);
      }
    for(int a=127;a <=255 ;a=a+3){
      ledcWrite(motorA_channel,a);
      ledcWrite(servo_channel,22);
      delay(100);
      }
    ledcWrite(motorA_channel,255);
    delay(10000);
    }
  }

    