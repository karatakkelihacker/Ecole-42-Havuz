#include <stdio.h>

// Beyaz boşlukları ve işareti kontrol eden yardımcı fonksiyon
int	whitespaces(char *str, int *ptr_i)
{
	int	count;
	int	i;

	count = 1;
	i = 0;
	// Beyaz boşlukları atla
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	// İşareti kontrol et
	while ((str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	// Döngü sonunda i değerini ptr_i ile paylaş
	*ptr_i = i;
	return (count);
}

// Karakter dizisini tamsayıya dönüştüren fonksiyon
int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	result = 0;
	// whitespaces fonksiyonunu kullanarak işaret ve beyaz boşlukları kontrol et
	sign = whitespaces(str, &i);
	// Tamsayıyı dönüştür
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	// İşareti dikkate alarak sonucu hesapla
	result *= sign;
	return (result);
}
int	main(void)
{
	char	*s;

	s = "   ---+--+01234506789ab567";
	printf("%d", ft_atoi(s));
}
