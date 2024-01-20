#include <stdio.h>

// Bir karakter dizisi içinde alt dizi arayan fonksiyon
char	*ft_strstr(char *str, char *to_find)
{
	int i, j;
	i = 0;
	j = 0;
	// Arama dizisi boşsa, ana diziyi geri döndür
	if (to_find[j] == '\0')
		return (str);
	// Ana dizi üzerinde gezin
	while (str[i] != '\0')
	{
		// Alt diziyi bulana kadar karşılaştırma yap
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		// Alt dizi bulunduysa, bulunduğu konumu geri döndür
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0; // Alt dizi bulunamadıysa, alt diziyi sıfırla
	}
	return (NULL); // Alt dizi bulunamadıysa, NULL değeri döndür
}

int	main(void)
{
	char	str[] = "42Kocaeli havuz öğrencisi Beyaz Takkeli";
	char	find[] = "Beyaz";

	printf("%s", ft_strstr(str, find));
}
