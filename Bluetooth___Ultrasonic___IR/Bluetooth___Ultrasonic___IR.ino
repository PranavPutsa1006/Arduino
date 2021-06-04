int motor_one1=9;
int motor_one2=10;
int motor_two1=5;
int motor_two2=3;
char command;
int receiver;
int distance;
int duration;
void setup() {
  Serial.begin(9600); // put your setup code here, to run once:
pinMode(6,INPUT);

pinMode(9,OUTPUT);
pinMode(10,OUTPUT);

pinMode(11,INPUT);

pinMode(5,OUTPUT);
pinMode(3,OUTPUT);

pinMode(14,INPUT);
pinMode(15,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorstate1= digitalRead(6);
int sensorstate2= digitalRead(11);
int receiver=analogRead(14);
int transmitter=analogRead(15);

digitalWrite(15,LOW);
delay(2);
digitalWrite(15,HIGH);
delay(10);
digitalWrite(15,LOW);
duration =pulseIn(14,HIGH);
distance=duration*.034/2;


if(distance<=20 && distance>5)
{analogWrite(9,80);
 analogWrite(10,0);
 analogWrite(5,80);
 analogWrite(3,0);
 
 
}
if(distance<=5)
{
  analogWrite(9,0);
 analogWrite(10,0);
 analogWrite(5,0);
 analogWrite(3,0);
 
 delay(400);

 analogWrite(9,0);
 analogWrite(10,140);
 analogWrite(5,0);
 analogWrite(3,140);
 
 delay(500);
  
 analogWrite(9,0);
  analogWrite(10,0);
  analogWrite(5,0);
 analogWrite(3,140);

  delay(500);

  analogWrite(9,140);
  analogWrite(10,0);
  analogWrite(5,140);
  analogWrite(3,0);

 

}

if(sensorstate1==HIGH && sensorstate2==HIGH)
{analogWrite(9,0);
 analogWrite(10,140);
 analogWrite(5,0);
 analogWrite(3,140);
 
 delay(500);
  
 analogWrite(9,0);
  analogWrite(10,0);
  analogWrite(5,0);
 analogWrite(3,180);

  delay(500);

  analogWrite(9,140);
  analogWrite(10,0);
  analogWrite(5,140);
  analogWrite(3,0);
}
else if(sensorstate1==LOW && sensorstate2==HIGH)
{analogWrite(9,0);
 analogWrite(10,140);
 analogWrite(5,0);
 analogWrite(3,140);
 
 delay(500);
  
  analogWrite(9,0);
  analogWrite(10,0);
  analogWrite(5,0);
  analogWrite(3,180);

  delay(500);

  analogWrite(9,140);
  analogWrite(10,0);
  analogWrite(5,140);
  analogWrite(3,0);
}
  
 else if(sensorstate1==HIGH && sensorstate2==LOW)
 {analogWrite(9,0);
 analogWrite(10,140);
 analogWrite(5,0);
 analogWrite(3,140);
 
 delay(500);
  
  analogWrite(9,0);
  analogWrite(10,0);
  analogWrite(5,0);
  analogWrite(3,180);

  delay(500);

  analogWrite(9,140);
  analogWrite(10,0);
  analogWrite(5,140);
  analogWrite(3,0);
  
 }

 else
{analogWrite(9,0);
 analogWrite(10,0);
 analogWrite(5,0);
 analogWrite(3,0);
}

while(Serial.available()>0)
{command=Serial.read();
if(command=='F')
{
analogWrite(9,180);
 analogWrite(10,0);
 analogWrite(5,180);
 analogWrite(3,0);
 }
else if(command=='L')
{
analogWrite(9,0);
analogWrite(10,0);
analogWrite(5,180);
analogWrite(3,0);
}
else if(command=='B')
{
analogWrite(9,0);
analogWrite(10,180);
analogWrite(5,0);
analogWrite(3,180);
}
else if(command=='R')
{
analogWrite(9,180);
analogWrite(10,0);
analogWrite(5,0);
analogWrite(3,0);
}}}

