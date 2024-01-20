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

// Verilen bir dizenin kelimelerinin baş harfini büyük harfe dönüştüren fonksiyon
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	int word_start = 1; // Kelimenin başlangıcını belirlemek için kullanılan bayrak
	// Önce tüm harfleri küçük harfe dönüştür
	ft_strlowcase(str);
	// Dizi boyunca gezin
	while (str[i] != '\0')
	{
		// Eğer karakter bir harfse
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9'))
		{
			// Eğer kelimenin başındaysa, harfi büyük harfe dönüştür
			if (word_start == 1)
			{
				str[i] -= 32;
				word_start = 0; // Bir kelime bulunduğu için bayrağı sıfırla
			}
		}
		else
		{
			word_start = 1;
				// Harf değilse bir sonraki kelimenin başlangıcını bekleyin
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	str1[] = "diujndfvon,odficj,dc dsfovij?kl43lo+dd-sdk%cdj*dc$sdc";

	printf("%s", ft_strcapitalize(str));
	printf("\n%s", ft_strcapitalize(str1));
}
