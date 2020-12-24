#define yesil 9
#define mavi 10
#define kirmizi 11
#define potm A0
#define poty A1
#define potk A2
int kd,yd,md;

void setup(){
  pinMode(kirmizi,OUTPUT);
  pinMode(yesil,OUTPUT);
  pinMode(mavi,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  kd=map(analogRead(potk),0,1023,0,255);
  yd=map(analogRead(poty),0,1023,0,255);
  md=map(analogRead(potm),0,1023,0,255);
  analogWrite(kirmizi,kd);
  analogWrite(yesil,yd);
  analogWrite(mavi,md);
  Serial.print("kirmizi= ");
  Serial.print(kd);
  Serial.print("\t");
  Serial.print("yesil= ");
  Serial.print(yd);
  Serial.print("\t");
  Serial.print("mavi= ");
  Serial.println(md);
}
