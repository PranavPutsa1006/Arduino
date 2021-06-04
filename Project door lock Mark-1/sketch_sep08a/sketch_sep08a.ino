const int motor_one1 = 2;
const int motor_one2 = 3;
const int motor_two1 = 4;
const int motor_two2 = 5;
void setup() {
  // put your setup code here, to run once:
pinMode (motor_one1,OUTPUT);
pinMode (motor_one2,OUTPUT);
pinMode (motor_two1,OUTPUT);
pinMode (motor_two2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(motor_one1,HIGH);
digitalWrite(motor_one2,LOW);
digitalWrite(motor_two1,HIGH);
digitalWrite(motor_two2,LOW);
}
