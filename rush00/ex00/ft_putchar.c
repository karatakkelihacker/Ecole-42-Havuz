#include <unistd.h>

// Bu fonksiyon, standart çıkışa tek bir karakter yazdırmak için basit bir uygulamadır.
// "char" c parametresi, yazdırılacak karakteri temsil eder.

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Bu fonksiyon, standart çıkışa null karakterle sonlanmış bir dize yazdırmak için kullanılır.
// "char *" str parametresi, yazdırılacak dizeyi temsil eder.

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &*str, 1);
		str++;
	}
}

// Bu fonksiyon, hata durumlarını işlemek için tasarlanmış gibi görünüyor.
// "ft_puterror" fonksiyonu, "rush" fonksiyonu için geçilen argümanların geçersiz olduğunu
// belirten önceden belirlenmiş bir hata mesajını standart çıkışa yazdırır.

void	ft_puterror(void)
{
	ft_putstr("Geçilen argümanlar rush fonksiyonu için geçersiz!\n");
	ft_putstr("-------> Özür dileriz (ｏ・_・)ノ”(ノ_<、) <-------\n");
}
