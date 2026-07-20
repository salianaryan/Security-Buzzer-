int ir= 8; 
int buzz= 9;
int led=10;

void setup() {
  // put your setup code here, to run once:
  
  pinMode(ir, INPUT);
  pinMode(buzz, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 
 
 if(digitalRead(ir) == LOW)
 {digitalWrite(led,HIGH);
  digitalWrite(buzz,HIGH);\
  
  }
else
{ 
 digitalWrite(led,LOW);
 digitalWrite(buzz,LOW);
 }
}
