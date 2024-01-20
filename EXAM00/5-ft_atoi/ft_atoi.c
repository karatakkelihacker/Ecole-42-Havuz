// ft_atoi: Bir karakter dizisini tamsayıya çeviren fonksiyon
int	ft_atoi(const char *str)
{
	int i = 0;      // Diziyi indekslemek için kullanılan değişken
	int sign = 1;   // Tamsayının işaretini tutan değişken (başlangıçta pozitif)
	int result = 0; // Tamsayı değerini tutan değişken
					// Boşluk karakterlerini geç (ASCII'de 32 tab ve diğer boşluk karakterleri aralığı 9-13)
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
		// İşaret kontrolü
		if (str[i] == '-')
		{
			sign = -1; // Eğer '-' işareti varsa, işareti negatif yap
			i++;
		}
		else if (str[i] == '+')
		{
			i++; // Eğer '+' işareti varsa,
			işareti pozitif bırak ve bir sonraki karaktere geç
		}
		// Rakam kontrolü ve tamsayıya çevirme
		while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
		{
			result *= 10; // Önceki değeri 10 ile çarp
			result += str[i] - '0';
			// Karakteri tamsayıya çevirip önceki değere ekle
			i++;
		}
		return (result * sign); // İşaret ile çarpılmış tamsayıyı döndür
}

/*
#include <stdio.h>

int	main(void)
{
	int	number;

	const char *str = "   -12345";
	number = ft_atoi(str);
	printf("%d\n", number);
	return (0);
}
*/