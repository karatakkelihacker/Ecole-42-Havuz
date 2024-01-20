#include <stdio.h>

// Karakter dizilerini karşılaştıran fonksiyon
int ft_strcmp(char *s1, char *s2)
{
    unsigned int i;

    // Karakter dizilerinin her bir karakterini karşılaştır
    // ve farklılık bulana kadar devam et
    i = 0;
    while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
    {
        i++;
    }

    // Farklılık bulunduğunda, karakterlerin ASCII değerlerini çıkararak sonucu döndür
    return (s1[i] - s2[i]);
}

int	main()
{
	printf("%d", ft_strcmp("Hello", "Hello1"));
	printf("\n%d", ft_strcmp("Hello", "He"));
	printf("\n%d", ft_strcmp("He", "Hello"));
	printf("\n%d", ft_strcmp("Hello", "Hello"));
}
