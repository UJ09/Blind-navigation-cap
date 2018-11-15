#define trigPin 12
#define echoPin 5
#define buzzer 6
void setup()
{
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(buzzer,OUTPUT);
}
void loop()
{
long duration, distance;
digitalWrite(trigPin, LOW); 
delayMicroseconds(2); 
digitalWrite(trigPin, HIGH);
delayMicroseconds(10); 
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = (duration*0.034)/2.0;
if ((distance >100)&&(distance<150))
{ 
digitalWrite(buzzer,HIGH);
delay(100);
digitalWrite(buzzer,LOW);
}
else if((distance>50)&&(distance<100))
{
  digitalWrite(buzzer,HIGH);
  delay(400);
  digitalWrite(buzzer,LOW);
}
else if((distance>25)&&(distance<50))
{
  digitalWrite(buzzer,HIGH);
  delay(700);
  digitalWrite(buzzer,LOW);
}
else if(distance<25)
{
  digitalWrite(buzzer,HIGH);
  delay(1000);
  digitalWrite(buzzer,LOW);
}
else
{
digitalWrite(buzzer,LOW); 
}
digitalWrite(buzzer,LOW);
delay(200);
}
