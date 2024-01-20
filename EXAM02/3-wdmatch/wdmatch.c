#include <unistd.h>

// Alt dizgi kontrolü yapacak fonksiyon
void wdmatch(char *s1, char *s2)
{
	int len;
	int i;
	
	len = 0;
	i = 0;

	// s1'in uzunluğunu bul
	while (s1[len])
		++len;

	// s2'nin sonuna kadar ve s1'in uzunluğu kadar kontrol et
	while (*s2 && i < len)
		(*s2++ == s1[i]) ? ++i : 0;

	// Eğer i, s1'in uzunluğuna eşitse, s1'i yazdır
	if (i == len)
		write(1, s1, len);
}

// Ana fonksiyon
int main(int ac, char **av)
{
	// Eğer doğru sayıda argüman varsa wdmatch fonksiyonunu çağır
	if (ac == 3)
		wdmatch(av[1], av[2]);

	// Yeni satır karakteri ekleyerek programı sonlandır
	write(1, "\n", 1);

	return 0;
}
