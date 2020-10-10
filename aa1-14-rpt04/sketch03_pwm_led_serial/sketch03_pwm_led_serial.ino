//sketch03_pwm_led_serial.ino
int pwm=0;
int led=3;

void setup(){
  Serial.begin(9600);
}

void loop(){
  //put your main code here:
  pwm=random(0,255);
  pwmLed(led,pwm);

  Serial.print("AA0914,LED: ");
  Serial.println(pwm);
  delay(10);
}

void pwmLed(int led, int pwmValue){
  analogWrite(led, pwmValue);
  delay(10);
}
