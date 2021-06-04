
int motor_one1=9;
int motor_one2=10;
int motor_two1=5;
int motor_two2=3;
int transmitter1,transmitter2,transmitter3;
int receiver1,reciver2,reciever3;
int distance1,distance2,distance3;
int duration1,duration2,duration3;
void setup() {
  // put your setup code here, to run once:
pinMode(14,INPUT);
pinMode(16,INPUT);
pinMode(18,INPUT);

pinMode(9,OUTPUT);
pinMode(10,OUTPUT);

pinMode(15,OUTPUT);
pinMode(17,OUTPUT);
pinMode(19,OUTPUT);

pinMode(5,OUTPUT);
pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int receiver1=analogRead(14);
  int transmitter1=analogRead(15);

   int receiver2=analogRead(16);
  int transmitter2=analogRead(17);

   int receiver3=analogRead(18);
  int transmitter3=analogRead(19);

digitalWrite(15,LOW);
delay(2);
digitalWrite(15,HIGH);
delay(10);
digitalWrite(15,LOW);
duration1 =pulseIn(14,HIGH);
distance1=duration1*.034/2;

digitalWrite(17,LOW);
delay(2);
digitalWrite(17,HIGH);
delay(10);
digitalWrite(17,LOW);
duration2 =pulseIn(16,HIGH);
distance2=duration2*.034/2;

digitalWrite(19,LOW);
delay(2);
digitalWrite(19,HIGH);
delay(10);
digitalWrite(19,LOW);
duration3 =pulseIn(18,HIGH);
distance3=duration3*.034/2;


if(distance<=20 && distance>5)
{
  analogWrite(9,80);
 analogWrite(10,0);
 analogWrite(5,80);
 analogWrite(3,0); 
}
else if(distance<=5)
{
 analogWrite(9,0);
 analogWrite(10,0);
 analogWrite(5,0);
 analogWrite(3,0);
}
else
{
analogWrite(9,160);
analogWrite(10,0);
analogWrite(5,160);
analogWrite(3,0);
}
}
