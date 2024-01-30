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
    ledcannWrite(servo_channel,20);
    ledcWrite(motorA_channel,0);
    ledcWrite(motorB_channel,0);
    }

void loop(){
    while (1){
        ledcWrite(motorB_channel,128);
        delay(5000);
        ledcWrite(servo_channel,14);
        delay(2000);
        ledcWrite(motorB_channel,128);
        delay(2000);
        ledcWrite(servo_channel,20);
        delay(2000);
        ledcWrite(motorB_channel,128);
        delay(5000);
        ledcWrite(servo_channel,14);
        delay(2000);
        ledcWrite(motorB_channel,128);
        delay(2000);
        ledcWrite(servo_channel,20);
        delay(2000);
        ledcWrite(motorB_channel,128);
        delay(5000);
        }

    }