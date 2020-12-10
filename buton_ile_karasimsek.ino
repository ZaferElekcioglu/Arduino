#define buton 2
bool buton_durum=0;
void setup(){
  for(int i=3;i<9;i++){
  pinMode(i,OUTPUT);
  }
  pinMode(buton,INPUT);
}
void loop(){
  buton_durum=digitalRead(buton);
  if(buton_durum==1){
    for(int i=3;i<9;i++){
      digitalWrite(i,HIGH);
      delay(200);
      digitalWrite(i,LOW);
    }
    for(int i=7;i>3;i--){
      digitalWrite(i,HIGH);
      delay(200);
      digitalWrite(i,LOW);
    }
  }
  else{
    for(int i=3;i<9;i++){
      digitalWrite(i,LOW);}
  }
}
