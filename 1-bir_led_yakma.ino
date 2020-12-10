void setup(){
    pinMode(13,OUTPUT);       // 13 nolu pin çıkış olarak atandı 
}
void loop(){
    digitalWrite(13,HIGH);       // led aktif
    delay(1000);                        // 1 saniye bekleme
    digitalWrite(13,LOW);        // led pasif
    delay(1000);                       // 1 saniye bekleme
} 
