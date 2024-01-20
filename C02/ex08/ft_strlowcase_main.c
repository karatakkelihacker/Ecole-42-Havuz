#include <stdio.h>

// Verilen bir dizenin tüm büyük harflerini küçük harfe dönüştüren fonksiyon
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	// Dizi boyunca gezin
	while (str[i] != '\0')
	{
		// Eğer karakter büyük harfse, küçük harfe dönüştür
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			// Büyük harfleri küçük harfe dönüştürmek için ASCII farkını (32) ekleyin
			str[i] += 32;
		}
		i++;
	}
	// Dönüştürülmüş diziyi döndür
	return (str);
}

int	main(void)
{
	char	str[] = "ABCDEFGH";

	printf("%s", ft_strlowcase(str));
}
