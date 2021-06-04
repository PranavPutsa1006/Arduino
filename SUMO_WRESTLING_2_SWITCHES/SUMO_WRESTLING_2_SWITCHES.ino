
int motor_one1=9;
int motor_one2=10;
int motor_two1=5;
int motor_two2=3;

void setup() {
  // put your setup code here, to run once:
pinMode(6,INPUT_PULLUP);

pinMode(9,OUTPUT);
pinMode(10,OUTPUT);

pinMode(11,INPUT_PULLUP);

pinMode(5,OUTPUT);
pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int sw1=digitalRead(6);
int sw2=digitalRead(11);




if(sw2==HIGH&&sw1==LOW)
{analogWrite(9,0);
 analogWrite(10,0);
 analogWrite(5,200);
 analogWrite(3,0);
 
 delay(3000);
}
if(sw1==HIGH&&sw2==LOW)
{
  analogWrite(9,200);
 analogWrite(10,0);
 analogWrite(5,0);
 analogWrite(3,0);
 delay(3000);
}
if(sw1==HIGH && sw2==HIGH)
{analogWrite(9,200);
 analogWrite(10,0);
 analogWrite(5,200);
 analogWrite(3,0);
  delay(3000);
 
}
else{
analogWrite(9,100);
analogWrite(10,0);
analogWrite(5,100);
analogWrite(3,0);
 delay(3000);
}}
