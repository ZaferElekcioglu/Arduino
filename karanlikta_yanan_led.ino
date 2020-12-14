#define led 3
#define ldr A0
int isik_degeri=0;
void setup(){
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  isik_degeri=analogRead(ldr);
  Serial.print("isik degeri= ");
  Serial.println(isik_degeri);
  if(isik_degeri<250)
    digitalWrite(led,HIGH);
  else
    digitalWrite(led,LOW);
}
