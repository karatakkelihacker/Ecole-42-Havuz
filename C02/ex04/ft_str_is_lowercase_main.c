#include <stdio.h>

// Verilen bir dizenin sadece küçük harf içerip içermediğini kontrol eden fonksiyon
int	ft_str_is_lowercase(char* str)
{
	int	i;

	i = 0;
	// Dizi boyunca gezin
	while (str[i] != '\0')
	{
		// Eğer karakter küçük harf değilse, 0 döndür ve fonksiyondan çık
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	// Eğer dizi tamamen küçük harflerden oluşuyorsa, 1 döndür
	return (1);
}

int	main(void)
{
	printf("%d", ft_str_is_lowercase("abcdefghijkl")); // 1
	printf("\n%d", ft_str_is_lowercase("abcAdefghijkl")); // 0
	printf("\n%d", ft_str_is_lowercase("-_134556efSghij67")); // 0
}
