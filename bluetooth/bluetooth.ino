
int motor_one1=9;
int motor_one2=10;
int motor_two1=5;
int motor_two2=3;
char command;
void setup() {
  Serial.begin(9600);// put your setup code here, to run once:

pinMode(9,OUTPUT);
pinMode(10,OUTPUT);

pinMode(5,OUTPUT);
pinMode(3,OUTPUT);
}

void loop() {
while(Serial.available()>0){
command=Serial.read();
if(command=='F')
{
analogWrite(9,255);
 analogWrite(10,0);
 analogWrite(5,255);
 analogWrite(3,0);
   
}
else if(command=='L')
{
analogWrite(9,0);
analogWrite(10,255);
analogWrite(5,255);
analogWrite(3,0);
  
}
else if(command=='B')
{
analogWrite(9,0);
analogWrite(10,255);
analogWrite(5,0);
analogWrite(3,255);
  
}else if(command=='R')
{
analogWrite(9,255);
analogWrite(10,0);
analogWrite(5,0);
analogWrite(3,255);
  
}

else if(command=='G')
{
analogWrite(9,200);
analogWrite(10,0);
analogWrite(5,255);
analogWrite(3,0);
}
else if(command=='I')
{
analogWrite(9,255);
analogWrite(10,0);
analogWrite(5,200);
analogWrite(3,0);
}
else if(command=='H')
{
analogWrite(9,0);
analogWrite(10,200);
analogWrite(5,0);
analogWrite(3,255);
}
else if(command=='J')
{
analogWrite(9,0);
analogWrite(10,255);
analogWrite(5,0);
analogWrite(3,200);
}
else if(command=='S')
{
analogWrite(9,0);
analogWrite(10,0);
analogWrite(5,0);
analogWrite(3,0);
}}}
