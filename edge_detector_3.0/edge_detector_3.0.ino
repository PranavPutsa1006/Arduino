
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
{analogWrite(9,0);
 analogWrite(10,200);
 analogWrite(5,0);
 analogWrite(3,200);
 
 delay(1000);
 
 analogWrite(9,0);
 analogWrite(10,0);
 analogWrite(5,0);
 analogWrite(3,0);
 
 delay(500);
  
 {analogWrite(9,0);
 analogWrite(10,50);
 analogWrite(5,125);
 analogWrite(3,0);
}
if(sensorstate1==LOW && sensorstate2==HIGH)
{analogWrite(9,0);
 analogWrite(10,200);
 analogWrite(5,0);
 analogWrite(3,200);
 
 delay(1000);
 
 analogWrite(9,0);
 analogWrite(10,0);
 analogWrite(5,0);
 analogWrite(3,0);
 
 delay(500);
  
 analogWrite(9,0);
 analogWrite(10,50);
 analogWrite(5,125);
 analogWrite(3,0);

 if(sensorstate1==HIGH && sensorstate2==LOW)
 {analogWrite(9,0);
 analogWrite(10,200);
 analogWrite(5,0);
 analogWrite(3,200);
 
 delay(1000);
 
 analogWrite(9,0);
 analogWrite(10,0);
 analogWrite(5,0);
 analogWrite(3,0);
 
 delay(500);

 analogWrite(9,0);
 analogWrite(10,50);
 analogWrite(5,125);
 analogWrite(3,0);
 }
}
}
}

