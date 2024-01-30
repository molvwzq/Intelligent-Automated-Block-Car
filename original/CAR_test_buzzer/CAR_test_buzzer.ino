const int buzzer = 25;

const int f = 1000;
const int c = 0;
const int r = 8;
const int d = 128;

void setup() {
  ledcSetup(c,f,r);
  ledcAttachPin(buzzer,c);
}

void loop() {
  //固定频率--修改占空比--响度
  ledcWriteTone(c,f);
  for(int d = 0;d <= 255;d=d+30){
    ledcWrite(c,d);
    delay(500);
  }
  //固定占空比--修改频率--音调
  ledcWrite(c,d);
  for(int f = 200;f<=2000;f=f+100){
    ledcWrite(c,f);
    delay(500);
  }
  
}
