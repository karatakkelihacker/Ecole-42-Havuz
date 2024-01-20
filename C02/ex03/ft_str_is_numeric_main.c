#include <stdio.h>

// Verilen bir dizenin sadece sayısal karakterlerden oluşup oluşmadığını kontrol eden fonksiyon
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	// Dizi boyunca gezin
	while (str[i] != '\0')
	{
		// Eğer karakter bir sayısal karakter değilse, 0 döndür ve fonksiyondan çık
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	// Eğer dizi tamamen sayısal karakterlerden oluşuyorsa, 1 döndür
	return (1);
}

int	main(void)
{
	printf("%d", ft_str_is_numeric("01948987493"));        // 1
	printf("\n%d", ft_str_is_numeric("0484882j8995489"));  // 0
	printf("\n%d", ft_str_is_numeric("-_jsdsdc67sdlkc,")); // 0
	return (0);
}
