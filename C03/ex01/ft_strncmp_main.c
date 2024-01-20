#include <stdio.h>

// Belirli bir uzunluktaki karakter dizilerini karşılaştıran fonksiyon
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	// Karakter dizilerini karşılaştır ve belirli bir uzunluğa kadar veya farklılık bulana kadar devam et
	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		// Karakterlerin ASCII değerlerine göre karşılaştırma yap
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0); // Belirtilen uzunluğa kadar herhangi bir farklılık bulunmadı
}

int	main(void)
{
	printf("%d", ft_strncmp("Hello", "HelloWorld", 8));
}
