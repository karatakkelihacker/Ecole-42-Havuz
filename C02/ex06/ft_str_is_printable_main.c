#include <stdio.h>

// Verilen bir dizenin sadece yazdırılabilir karakterlerden oluşup oluşmadığını kontrol eden fonksiyon
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	// Dizi boyunca gezin
	while (str[i] != '\0')
	{
		// Eğer karakter yazdırılabilir bir karakter değilse, 0 döndür ve fonksiyondan çık
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	// Eğer dizi tamamen yazdırılabilir karakterlerden oluşuyorsa, 1 döndür
	return (1);
}

int	main(void)
{
	printf("%d", ft_str_is_printable("ABDELKFSCO?I340990%")); // 1
	printf("\n%d", ft_str_is_printable("\n\t\v\f")); // 0
}
