#include <stdio.h>

// Bu fonksiyon, src'yi dest'e kopyalar.
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	// Kaynak dizisinin sonuna kadar karakterleri kopyala
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	// Hedef dizisine null karakter ekle (dizeyi sonlandır)
	dest[i] = '\0';
	// Hedef dizisini döndür
	return (dest);
}

int	main(void)
{
	char	src[] = "beyaztakkeli";
	char	dest[] = "karatakkeli";

	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return (0);
}
