int pwm=0;
int led=3;

void setup(){
  //아날로그 출력에서 핀 모드 설정이필요 없다.
}

void loop(){

  pwm=random(0,255);
  pwmLed(led,pwm);
}

void pwmLed(int led, int pwmValue){

  anlogWrite(led,pwmValue);
  delay(10);
}
