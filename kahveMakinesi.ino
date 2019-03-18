#include <Servo.h>
#include <LiquidCrystal.h>
#include <SoftwareSerial.h>
SoftwareSerial bt(10,11);
LiquidCrystal lcd(8,7,6,5,4,3);
Servo servoKahve;
Servo servoVana;
int isiticiRole=9;
char komut;

void setup()
{
  servoKahve.attach(12);
  servoVana.attach(13);
  lcd.begin(16,2);
  bt.begin(9600);
  pinMode(isiticiRole,OUTPUT);
  digitalWrite(9,HIGH);
  servoKahve.write(120);
  servoVana.write(0); 
}

void loop()
{  
  if (bt.available()>0)
  {
    komut = bt.read();
    if(komut == 'y')
    { 
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
    if(komut == 's')
    {
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
