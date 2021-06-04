/* Example code mohamed123456
** Created on 2017-07-04 @ 18h22 EDT
** Forum topic: http://www.robotshop.com/forum/arduino-code-to-solve-maze-using-3-ultrasonic-sensore-t16149
*/

int in1=13;
int in2=12;
int in3=11;
int in4=10;
int enA=6;
int enB=5;

void setup()
{
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(enA,OUTPUT);
  pinMode(enB,OUTPUT);
}
void forw()
{
  digitalWrite(in1,1);
  digitalWrite(in2,0);
  digitalWrite(in3,1);
  digitalWrite(in4,0);
}

void backw()
{
  digitalWrite(in1,0);
  digitalWrite(in2,1);
  digitalWrite(in3,0);
  digitalWrite(in4,1);
}

void right()
{
  digitalWrite(in1,1);
  digitalWrite(in2,0);
  digitalWrite(in3,0);
  digitalWrite(in4,1);
}

void left()
{
  digitalWrite(in1,0);
  digitalWrite(in2,1);
  digitalWrite(in3,1);
  digitalWrite(in4,0);
}

int distance(int pinN)
{
  long time;
  int cm;
  pinMode(pinN,OUTPUT);
  digitalWrite(pinN,LOW);
  delayMicroseconds(2);
  digitalWrite(pinN,HIGH);
  delayMicroseconds(5);
  digitalWrite(pinN,LOW);

  pinMode(pinN,INPUT);
  time=pulseIn(pinN,HIGH);
  cm= (time*0.034)/2;
  return cm;
}

void loop()
{
  analogWrite(enA,150);
  analogWrite(enB,150);
  while(distance(0)>15)
  {
    left();
    delay(10);
  }
  
  while(distance(1)>15)
  {
    forw();
  }
  
  while(distance(2)>15)
  {
    right();
  }
}
