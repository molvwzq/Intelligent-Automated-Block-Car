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
        for(int a = 0;a < 255;a=a+3){
          ledcWrite(motorA_channel,a);
          delay(85);
          }
        ledcWrite(servo_channel,14);
        delay(1500);
        for(int a = 255;a >= 191;a=a-3){
          ledcWrite(motorA_channel,a);
          delay(30);
          }
        ledcWrite(servo_channel,7);
        delay(2500);
        for(int a = 191;a >= 128;a=a-3){
          ledcWrite(motorA_channel,a);
          delay(100);
          }
        ledcWrite(servo_channel,22);
        delay(1900);
        for(int a = 128;a <= 255;a=a+3){
          ledcWrite(motorA_channel,a);
          delay(45);
          }
        ledcWrite(servo_channel,10);
        delay(1000);
        for(int a = 255;a >= 191;a=a-3){
          ledcWrite(motorA_channel,a);
          delay(30);
          }
        ledcWrite(servo_channel,9);
        delay(3700);
        for(int a = 191;a >= 128;a=a-3){
          ledcWrite(motorA_channel,a);
          delay(63);
          }
        
        ledcWrite(servo_channel,22);
        delay(2000);
        for(int a = 128;a <= 255;a=a+3){
          ledcWrite(motorA_channel,a);
          delay(40);
          }
        ledcWrite(motorA_channel,255);
        delay(3300);
        
        }
   
    }
    