void setup(){
    pinMode(6,OUTPUT);       //6 nolu pin çıkış olarak atandı
    pinMode(11,OUTPUT);    //11 nolu pin çıkış olarak atandı
}
void loop(){
    digitalWrite(6,HIGH);       //kırmızı led aktif
    digitalWrite(11,LOW);      //mavi led pasif
    delay(1000);                      // 1 saniye bekleme
    digitalWrite(6,LOW);        //kırmızı led pasif
    digitalWrite(11,HIGH);    //mavi led aktif
    delay(1000);                     // 1 saniye bekleme
}
