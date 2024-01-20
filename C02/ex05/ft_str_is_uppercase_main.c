#include <stdio.h>

// Verilen bir dizenin sadece büyük harf içerip içermediğini kontrol eden fonksiyon
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	// Dizi boyunca gezin
	while (str[i] != '\0')
	{
		// Eğer karakter büyük harf değilse, 0 döndür ve fonksiyondan çık
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	// Eğer dizi tamamen büyük harflerden oluşuyorsa, 1 döndür
	return (1);
}

int	main(void)
{
	printf("%d", ft_str_is_uppercase("ABCDEFGH")); // 1            
	printf("\n%d", ft_str_is_uppercase("ABCDEFGHaI")); // 0        
	printf("\n%d", ft_str_is_uppercase("-_134556ABCDEFGaH67")); // 0
	return (0);
}
