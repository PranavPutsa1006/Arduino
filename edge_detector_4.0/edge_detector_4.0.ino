
int motor_one1=9;
int motor_one2=10;
int motor_two1=5;
int motor_two2=3;

void setup() {
  // put your setup code here, to run once:
pinMode(6,INPUT);

pinMode(9,OUTPUT);
pinMode(10,OUTPUT);

pinMode(11,INPUT);

pinMode(5,OUTPUT);
pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorstate1= digitalRead(6);
int sensorstate2= digitalRead(11);

if(sensorstate1==HIGH && sensorstate2==HIGH)
{digitalWrite(9,LOW);
 digitalWrite(10,HIGH);
 digitalWrite(5,LOW);
 digitalWrite(3,HIGH);
 
 delay(1000);
  
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(5,LOW);
  digitalWrite(3,HIGH);

  delay(1000);

  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(3,LOW);
}
if(sensorstate1==LOW && sensorstate2==HIGH)
{digitalWrite(9,LOW);
 digitalWrite(10,HIGH);
 digitalWrite(5,LOW);
 digitalWrite(3,HIGH);
 
 delay(1000);
  
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(5,LOW);
  digitalWrite(3,HIGH);

  delay(1000);

  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(3,LOW);
  
 if(sensorstate1==HIGH && sensorstate2==LOW)
 {digitalWrite(9,LOW);
 digitalWrite(10,HIGH);
 digitalWrite(5,LOW);
 digitalWrite(3,HIGH);
 
 delay(1000);
  
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(5,LOW);
  digitalWrite(3,HIGH);

  delay(1000);

  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(3,LOW);
  
 }
}
else
digitalWrite(9,HIGH);
digitalWrite(10,LOW);
digitalWrite(5,HIGH);
digitalWrite(3,LOW);
}
