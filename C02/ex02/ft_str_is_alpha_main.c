#include <stdio.h>

// Verilen bir dizenin sadece alfabetik karakterlerden oluşup oluşmadığını kontrol eden fonksiyon
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	// Eğer dizi boşsa,alfabetik karakter içerdiğini varsayalım ve 1 döndürelim.
	if (str[i] == '\0')
	{
		return (1);
	}
	// Dizi boyunca gezin
	while (str[i] != '\0')
	{
		// Eğer karakter büyük harf veya küçük harf ise, devam et
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
			i++;
		else
			return (0); // Eğer bir alfabetik karakter değilse,0 döndür ve fonksiyondan çık
	}
	return (1); // Dizi tamamen alfabetik karakterlerden oluşuyorsa, 1 döndür
}

int	main(void)
{
	printf("%d", ft_str_is_alpha("abcdefghijkl"));       // 1
	printf("\n%d", ft_str_is_alpha("abc1defghijkl"));    // 0
	printf("\n%d", ft_str_is_alpha("-_134556efghij67")); // 0
	return (0);
}
