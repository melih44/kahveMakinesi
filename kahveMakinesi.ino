#include <Servo.h> // Servo Kütüphanesi eklendi.
#include <LiquidCrystal.h> // LCD Kütüphanesi eklendi.
#include <SoftwareSerial.h> // Arduinonun TX RX uçları arızalı olduğu için bluetooth modülünde kullanılmak üzere kütüphane eklendi.
SoftwareSerial bt(10,11);  // bluetooth bağlantıları
LiquidCrystal lcd(8,7,6,5,4,3); // lcd bağlantıları
Servo servoKahve; // servo tanıtıldı
Servo servoVana; // servo tanıtıldı
int isiticiRole=9; // ısıtıcı röleyi 9. pinden kontrol edeceğiz
char komut; // bluetooth kontrolü için tanımlandı

void setup()
{
  servoKahve.attach(12); // servoKahve 12.pin
  servoVana.attach(13); // servoVana 13.pin
  lcd.begin(16,2); // lcd 
  bt.begin(9600); // bluetooth 
  pinMode(isiticiRole,OUTPUT); // röleyi çıkış olarak tanımladık
  digitalWrite(9,HIGH); // röleyi başlangıç konumunu 1 yaptık (negatif kenar tetikleme.)
  servoKahve.write(120); // servoKahvenin başlangıç konumu
  servoVana.write(0); // servoVana başlangıç konumu
}

void loop()
{  
  if (bt.available()>0) // bluetooth kontrol edildi
  {
    komut = bt.read();
    if(komut == 'y') // MITnin sunmuş olduğu uygulamada yazılan kodda 'y' olarak tanımlandı. (fotoğraflarda mevcut.)
    { // kodlar
      lcd.setCursor(0,0);
      lcd.print("    Kahveniz    ");
      lcd.setCursor(0,1);
      lcd.print("  Hazirlaniyor  ");
      servoKahve.write(30);
      delay(4000);
      servoKahve.write(120);
      delay(1000);
      digitalWrite(9,LOW);     
      delay(50000);
      digitalWrite(9,HIGH);
      delay(1000);
      servoVana.write(95);
      delay(4200);
      servoVana.write(0);
      delay(1000);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Kahveniz Hazir!!");
      lcd.setCursor(0,1);
      lcd.print("  Afiyet Olsun  "); 
     }
    if(komut == 's') // MITnin sunmuş olduğu uygulamada yazılan kodda 's' olarak tanımlandı. (fotoğraflarda mevcut.)
    { // kodlar
        lcd.setCursor(0,0);
        lcd.print("    Kahveniz    ");
        lcd.setCursor(0,1);
        lcd.print("  Hazirlaniyor  ");
        servoKahve.write(180);
        delay(4000);
        servoKahve.write(120);
        delay(1000);
        digitalWrite(9,LOW);
        delay(50000);
        digitalWrite(9,HIGH);
        delay(1000);
        servoVana.write(95);
        delay(4200);
        servoVana.write(0);
        delay(1000);
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("Kahveniz Hazir!!");
        lcd.setCursor(0,1);
        lcd.print("  Afiyet Olsun  ");
    }   
   }
 }
