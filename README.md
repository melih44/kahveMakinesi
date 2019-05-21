# Telefon ile Bluetooth Kontrollü Kahve Makinesi
Bu proje telefonumuzun bluetooth özelliği ile haberleşebilen mekanik bir sistemdir. Amacımız gün içerisinde vazgeçilmezimiz olan kahve için pratik ve teknolojik bir çözüm bulmaktır. Hepimiz yoğun iş temposunda bizi daha dinç tutacak kahve çeşitlerini hayatımızın bir parçası olarak görmekteyiz. Projemiz bu konuda telefonumuzun bir tuşu ile istediğimiz kahve çeşitini bir dakikalık kısa sürede hazırlamaktadır böylece hem zamandan kazanmış hem de efor sarf etmeden teknolojik bir çözümle kahvemizi hazırlatmış oluyoruz.

Projemizde iki çeşit kahve için tasarlanmıştır. Şekerli ve şekersiz kahvelerimiz iki ayrı haznede bulunmakta ve iki haznenin kahve akan kısmına göre ayarlanmış delikli bir silindir üzerinden kontrol edilmektedir. Kahvelerimizi alt kısımda bulunan servoSG90 servo motor sayesinde açı ve miktar kalibresi yapılmıştır. Kahvemizin sıcak suyunu 220-5Volt dönüştürücü ile kontrol etmekteyiz. Bluetooth modülü ile kahve seçimimizi yaptığımız anca rölemiz aktif olacaktır ve rezistansımız suyu ısıtmaya başlayacaktır. Suyumuzun sıcaklığını zamansal ve miktar olarak kalibre ederek kodlamalarını yapmış bulunmaktayız. Kodlamada istediğimiz değerler geldiği zaman suyu vanasına bağlamış olduğumuz servoMG90 servo motor sayesinde suyumuzu kahvemizle buluşturuyoruz. Yaptığımız işlemleri LCD ekrana yazdırarak sistemimizin aşamalarını izlemiş bulunmaktayız.

Elektronik kart olarak arduıno uno kullandık. Kahve çeşitlerini ayarlamak için suyumuzu kontrol eden servo motor için servo motor kütüphanesini, bluetoothla haberleşmesi için MIT2 yazılımını ve serialsoft kütüphanesini, LCD ekrana yazdırabilmek için liquidcrystal kütüphaneleri kodumuzda kullandık. Sistemimiz ilk olarak kahve çeşitini bluetooth modülünden haberleştiğimiz telefon aracılığı ile kendi oluşturduğumuz arka plan ile bize secim sunacaktır. Seçtiğimiz kahve ile birlikte ilk olarak rölemiz aktif olacak suyumuz ısınmaya başlayacaktır. Seçtiğimiz kahveye göre kahveyi kontrol eden yazılım servo motoru ayarladığımız açı değerine getirecektir böylece kahvemiz dökülmeye başlayacaktır ayarladığımız kalibre değerine göre zamanı dolduğu an servo motorumuz ilk konumuna gidecektir bu sırada LCD ekranımızda **"KAHVENİZ HAZIRLANIYOR…"** yazısını okuyacağız. İstenilen zaman dolduğu zaman vanamızı kontrol eden servo motor aktif olacaktır ve kahvemiz hazır olacaktır.

**Gerekli Donanım Bileşenleri**

1. 1 adet Arduino Uno
2. 1 adet ServoSG90
3. 1 adet ServoMG90
4. 1 adet 220-5Volt dönüştürücü Röle
5. 1 adet 2x16 LCD Display
6. 1 adet HC06 Arduino Bluetooth Modül
7. 1 adet 220ohm direnç
8. 3 adet 1Kohm direnç
9. 1 adet Rezistans
10. Dişi-Erkek jumper kablo
