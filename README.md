LİNKLER
https://paysdu42.fr/?page=impatient-C#les-variables
https://github.com/merveenoyan/shell-cheatsheet
https://www.codewithharry.com/blogpost/c-cheatsheet
https://explainshell.com/
------------------------------------------------------------------------------------------------------------------
KISA NOTLAR
&: RAM deki adresi işaret eder.
*: Bir program içinde bir değişkenin bellek adresini tutar.
&&: ve(and)
==: Eşitlik
=: Atama operatörü
+=: topla ve ata
||: veya
!: değil
% - Bölümden kalan
------------------------------------------------------------------------------------------------------------------
char* str = char *str
*p = &c eşittir p = &c
------------------------------------------------------------------------------------------------------------------
char - Tek bir karakteri saklamak için kullanılır. {-128 ila 127}
int - Tam sayıları saklamak için kullanılır. {-2147483648 ila 2147483647}
unsigned int - Sadece pozitif tam sayı değerlerini saklar. {0 ila 4,294,967,295}
unsigned char - {0 ila 255}
-----------------------------------------------------------------------------------------------------------------
%d - Tamsayıları gösterir.
%f - Ondalık sayıları gösterir.
%c - Karakterleri gösterir.
%s - Dizileri (string) gösterir.
%i - tamsayıları yazdırmak için kullanılır (sekizlik veya onaltılı sayılar).
------------------------------------------------------------------------------------------------------------------
ft_putchar - Karakteri ekrana yazdırmak için kullanılır.
ft_putstr - Diziyi ekrana yazdırmak için kullanılır.
ft_putnbr - Tamsayıyı ekrana yazdırmak için kullanılır.
------------------------------------------------------------------------------------------------------------------
EXAM
Sınavda kullanılacak komutlar;
login -> exam
password -> exam

status - zaman vb. öğrenme
grademe - moulinet kontrolü
finish - sınavı bitirir

Projelerde ilerlemeniz kadar sınavlarda yüksek bir öneme sahiptir.Sınava girmek için;

1-Login ve password kısmına exam exam yazarak bilgisayarımızı açıyoruz.
2-Terminali açıyoruz ve examshell yazıyoruz.
3-Yazdıktan sonra isim ve şifremizi girip(şifre gözükmez) karşımıza gelen sorulara yes ve y diyerek sınava giriyoruz.
4-İşlemleri doğru uyguladıysanız şu an sınava başarılı bir şekilde girmişsiniz demektir.
5-Farklı terminal açıp cevapları içine yazacağımız rendu klasörüne giriyoruz.Buraya soru ismi ile klasör oluşturup içine soru dosyanını oluşturup cevabını içine yazmamız gerekiyor.
6-Soruları görmek için subject klasörüne giriyoruz.Hangi sorudaysak o klasöre girip istediğiniz dilde soruya erişebilirsiniz.
7-Örneğin; cd rendu ile klasöre giriyoruz -> mkdir only_a -> cd only_a -> touch only_a -> vim only_a -> Cevap yazılır ve çıkılır.
8-Soruyu doğru bir şekilde yaptıktan emin olduktan sonra pushlamak için rendu klasörü içinde aşağıdaki komutları sırasıyla yazıyoruz;
git add .
git commit -m "herhangibirsey"
git push
9-Sonrasında ana terminale gelip grademe diyerek sonucumuzu değerlendiriyoruz.Success alırsanız yeni soruya geçebilirsiniz.
10-Durumunuzu ve sürenizi görmek için ana terminale status yazabilirsiniz.
11-Sınavdan çıkmak isterseniz ana terminale finish yazarak sınavı bitirebilirsiniz.

------------------------------------------------------------------------------------------------------------------
Diziler

argc - main fonksiyonuna geçilen komut satırı argümanlarının toplam sayısını temsil eder.
argv - ise bu argümanları içeren bir dizi(pointer) olarak temsil eder.

Örneğin, ./program arg1 arg2 komutu için:

ac değeri 3 olacak (program adı dahil 3 argüman).
av ise {"./program", "arg1", "arg2"} gibi bir diziyi temsil eder.
------------------------------------------------------------------------------------------------------------------
Proje Pushlamak
dosyaismi -> burayaistediğiniz şeyi girebilirsiniz. ama yazdığım yerlere yanlış olmadan doğru şekilde aynı şeyi yazmalısınız.
gitrepolinki -> intra'daki pushlamanıza yarayan adres.


git init
git add .
git commit -m "dosyaismi"
git remote add "dosyaismi" gitrepolinki
git push --set-upstream dosyaismi master

Değerlendirmeye gittinizde ise projeyi çekmek için(Bulunduğunuz konuma dosyaismi adında klasörü çeker);
git clone gitrepolinki dosyaismi 
------------------------------------------------------------------------------------------------------------------
C YouTube Playlist from school

Shell00 > https://www.youtube.com/playlist?list=PLVQYiy6xNUxxhvwi0PGmXb5isUdVwmsg8
Shell01 > https://www.youtube.com/playlist?list=PLVQYiy6xNUxxhvwi0PGmXb5isUdVwmsg8
C00 > https://www.youtube.com/playlist?list=PLVQYiy6xNUxz5wbzZn4tfUhF4djgzscB-
C01 > https://www.youtube.com/playlist?list=PLVQYiy6xNUxytsXWxZx6odBJMbRktIHTs
C02 > https://www.youtube.com/playlist?list=PLVQYiy6xNUxzpalWNSNJc4wEDmfs2Mj5t
C03 > https://www.youtube.com/playlist?list=PLVQYiy6xNUxz5wbzZn4tfUhF4djgzscB-
C04 > https://www.youtube.com/playlist?list=PLVQYiy6xNUxzlA5vk2B1xVjjGBJy7R4X4
C05 > https://www.youtube.com/playlist?list=PLVQYiy6xNUxxZbeH9b0VC-nC6QsJRw5Ah
C06 > https://www.youtube.com/playlist?list=PLVQYiy6xNUxxDlCkkCX262SI90TsllYUW
C07 > https://www.youtube.com/playlist?list=PLVQYiy6xNUxzNYF00nlmx624twFlamqLt
C08 > https://www.youtube.com/playlist?list=PLVQYiy6xNUxxMI_GiGGb2hxMcd3IwNYRy
C09 > https://www.youtube.com/playlist?list=PLVQYiy6xNUxw6n6q_i8wek6U7t7CeAXhU
C10 > https://www.youtube.com/playlist?list=PLVQYiy6xNUxw_vu1L7tOoddOsHnZQwVf7
C11 > https://www.youtube.com/playlist?list=PLVQYiy6xNUxx8sKygTdqtOPytqN7sb0Vz
C12 > https://www.youtube.com/playlist?list=PLVQYiy6xNUxwmUOmyYSaI6gD1UyfF9MSj
C13 > https://www.youtube.com/playlist?list=PLVQYiy6xNUxzusAgMiybYwkLvuMFbVat9
