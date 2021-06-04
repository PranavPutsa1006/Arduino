int motor_one1=9;
int motor_one2=10;
int motor_two1=5;
int motor_two2=3;

void setup() {
  pinMode(6,INPUT);

pinMode(9,OUTPUT);
pinMode(10,OUTPUT);

pinMode(11,INPUT);

pinMode(5,OUTPUT);
pinMode(3,OUTPUT);
}

void loop() {
  int sensorstate1= digitalRead(6);
int sensorstate2= digitalRead(11);

if(sensorstate1==HIGH && sensorstate2==HIGH)
{analogWrite(9,195);
 analogWrite(10,0);
 analogWrite(5,195);
 analogWrite(3,0);}

 else if(sensorstate1==HIGH && sensorstate2==LOW)
{analogWrite(9,25);
 analogWrite(10,0);
 analogWrite(5,195);
 analogWrite(3,0);}

  else if(sensorstate1==LOW && sensorstate2==HIGH)
 {analogWrite(9,195);
 analogWrite(10,0);
 analogWrite(5,25);
 analogWrite(3,0);
}
}


