#include <stdio.h>

// Verilen bir dizenin tüm küçük harflerini büyük harfe dönüştüren fonksiyon
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	// Dizi boyunca gezin
	while (str[i] != '\0')
	{
		// Eğer karakter küçük harfse, büyük harfe dönüştür
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			// Küçük harfleri büyük harfe dönüştürmek için ASCII farkını (32) ekleyin
			str[i] -= 32;
		}
		i++;
	}
	// Dönüştürülmüş diziyi döndür
	return (str);
}

int	main(void)
{
	char	str[] = "abcdefghj";

	printf("%s", ft_strupcase(str));
}
