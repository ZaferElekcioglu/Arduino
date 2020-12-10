void setup(){
    pinMode(8,OUTPUT);       //8 nolu pin çıkış olarak atandı
    pinMode(9,OUTPUT);       //9 nolu pin çıkış olarak atandı
    pinMode(10,OUTPUT);     //10 nolu pin çıkış olarak atandı
    pinMode(11,OUTPUT);     //11 nolu pin çıkış olarak atandı
}
void loop(){
    digitalWrite(8,HIGH);        //1. Led yandı
    delay(1000);                       //1saniye bekleme
    digitalWrite(8,LOW);         //1. Led söndü
    delay(1000);                       //1 saniye bekleme
    digitalWrite(9,HIGH);        //2. Led yandı
    delay(1000);                       //1 saniye bekleme
    digitalWrite(9,LOW);         //2. Led söndü
    delay(1000);                       //1 saniye bekleme
    digitalWrite(10,HIGH);      //3. Led yandı
    delay(1000);                       //1 saniye bekleme
    digitalWrite(10,LOW);       //3. Led söndü
    delay(1000);                       //1 saniye bekleme
    digitalWrite(11,HIGH);       //4. Led yandı
    delay(1000);                       //1 saniye bekleme
    digitalWrite(11,LOW);       //4. Led söndü
    delay(1000);                       //1 saniye bekleme
}
