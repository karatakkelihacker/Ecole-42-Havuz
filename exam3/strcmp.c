// İki dizeyi karşılaştıran fonksiyon
int	ft_strcmp(char *s1, char *s2)
{
	// s1 ve s2'deki karakterleri karşılaştır
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	// Karşılaştırma sonucu elde edilen farkı döndür
	return (unsigned char)(*s1) - (unsigned char)(*s2);
}

#include <stdio.h>

int	main(void)
{
	char	str1[] = "aaa";
	char	str2[] = "aaba";

	// Karşılaştırılacak iki karakter dizisi
	// ft_strcmp fonksiyonunu kullanarak karakter dizilerini karşılaştır ve sonucu yazdır
	printf("%d\n", ft_strcmp(str1, str2));
	return (0);
}