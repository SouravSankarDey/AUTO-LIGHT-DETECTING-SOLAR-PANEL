void setup(){
{{initialize digital pin 13 as an output,
pinMode(2,INPUT);
pinMode(4,OUTPUT);
pinMode(2,INPUT);
pinMode(5,OUTPUT);
}

if the loop function runs ever and ever again forever
void loop(){
if(digitalREAD(2)==HIGH){
  digitalWrite(4,HIGH);
}
else if(digitalREAD(3)==HIGH){
  digitalWrite(5,HIGH);
}
else {
     digitalWrite(4,LOW)
     digitalWrite(5,LOW);
}
}

