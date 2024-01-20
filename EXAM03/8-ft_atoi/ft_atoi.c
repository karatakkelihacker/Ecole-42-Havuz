int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	// Boşluk karakterleri (32) veya tab, yeni satır,vb. karakterleri (9-13) geç
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	// Eğer karakter '-' ise, işareti negatif olarak ayarla ve bir sonraki karaktere geç
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	// Eğer karakter '+' ise, bir sonraki karaktere geç
	else if (str[i] == '+')
		i++;
	// Karakter dizisinin sonuna kadar ve rakam karakterleri arasında döngü yap
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		// Sayıyı 10 ile çarp ve yeni rakamı ekle
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	// Sonucu işaretle çarp ve döndür
	return (result * sign);
}

/*
#include <stdio.h>

int main(void)
{
    const char *str = "+342+34d234avsfd"; // Değiştirilmesi gereken string
    int result = ft_atoi(str);

    printf("String: %s\n", str);
    printf("Integer: %d\n", result);

    return 0;
}
*/