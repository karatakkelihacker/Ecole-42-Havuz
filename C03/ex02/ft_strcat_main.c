#include <stdio.h>

// İki karakter dizisini birleştiren fonksiyon
char	*ft_strcat(char *dest, char *src)
{
	int i, j;
	// İlk karakter dizisinin sonuna kadar git
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	// İkinci karakter dizisini birleştir
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	// Birleştirilen karakter dizisinin sonuna null karakter ekle
	dest[i] = '\0';
	return (dest); // Birleştirilen karakter dizisini döndür
}

int	main(void)
{
	char	src[] = "Takkeli";
	char	dest[] = "Beyaz ";

	printf("%s", ft_strcat(dest, src));
}
