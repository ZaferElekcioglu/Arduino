#define yesil 8
#define kirmizi 11
#define buton 3

void setup(){
  pinMode(buton,INPUT);
  pinMode(yesil,OUTPUT);
  pinMode(kirmizi,OUTPUT);
}
void loop(){
  if(digitalRead(buton)==1){
    digitalWrite(yesil,HIGH);
    digitalWrite(kirmizi,LOW);
  }
  else{
    digitalWrite(yesil,LOW);
    digitalWrite(kirmizi,HIGH);
  }
}
