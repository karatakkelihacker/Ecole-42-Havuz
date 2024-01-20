#include <stdio.h>

// Bu fonksiyon, src'nin belirli bir uzunluğunu dest dizisine kopyalar.
// n = kopyalanacak maksimum karakter sayısı
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	// Kaynak dizisinin sonuna veya n karaktere kadar olan kısmını hedef dizisine kopyala
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	// Eğer kaynak dizisi n karakterden kısa ise,geriye kalan boşlukları null karakter ile doldur
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	// Hedef dizisini döndür
	return (dest);
}

int	main(void)
{
	char	src[] = "Hello";
	char	dest[] = "World!";

	printf("%s\n", ft_strncpy(dest, src, 3));
	printf("%s\n", ft_strncpy(dest, src, 5));
	printf("%s\n", ft_strncpy(dest, src, 7));
	return (0);
}
