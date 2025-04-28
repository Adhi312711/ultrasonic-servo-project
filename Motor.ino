//CREATIVE OJAS

#include <Servo.h>   //servo library
Servo servo;     
int trigPin = 6;    
int echoPin = 5;   
int servoPin = 7;
int led = 8;
long duration, dist, average;   
long aver[3];   //array for average


void setup() {       
    servo.attach(servoPin);  
    pinMode(trigPin, OUTPUT);  
    pinMode(echoPin, INPUT);  
    servo.write(0);        
    delay(1000);
    servo.detach();
    pinMode(led,OUTPUT);
} 

void measure() {  
digitalWrite(trigPin, LOW);
delayMicroseconds(5);
digitalWrite(trigPin, HIGH);
delayMicroseconds(15);
digitalWrite(trigPin, LOW);
pinMode(echoPin, INPUT);
duration = pulseIn(echoPin, HIGH);
dist = (duration/2) / 29.1;
}
void loop() { 
  for (int i=0;i<=2;i++) {   
    measure();               
   aver[i]=dist;            
    delay(50);           
  }
 dist=(aver[0]+aver[1]+aver[2])/3;    
if ( dist<10 ) {
  digitalWrite(led,HIGH);
 servo.attach(servoPin);
  delay(1);
 servo.write(0);  
 delay(500);
 servo.write(95);  
 delay(500);
 servo.detach();      
}
else
{

digitalWrite(led, LOW);

} 
}

