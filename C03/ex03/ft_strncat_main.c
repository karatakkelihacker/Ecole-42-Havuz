#include <stdio.h>

// Belirli bir uzunluktaki karakter dizilerini birleştiren fonksiyon
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i, j;
	// İlk karakter dizisinin sonuna kadar git
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	// İkinci karakter dizisinin belirli bir uzunluğa kadar olan kısmını birleştir
	j = 0;
	while (j < nb && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	// Birleştirilen karakter dizisinin sonuna null karakter ekle
	dest[i + j] = '\0';
	return (dest); // Birleştirilen karakter dizisini döndür
}

int	main(void)
{
	char	src[] = "Network";
	char	dest[] = "42 ";

	printf("%s", ft_strncat(dest, src, 3)); // nb = 3
}
