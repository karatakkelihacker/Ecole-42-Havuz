char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	// s2 dizisinin karakterlerini s1 dizisine kopyala
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	// s1 dizisine null karakter ekle
	s1[i] = '\0';
	return (s1);
}

/*
#include <stdio.h>

int	main(void)
{
	char s2[] = "Hello, World!";
	char s1[20] = "Merhaba, Dünya!"; // Bu boyut, source dizisinden daha büyük ya da eşit olmalıdır

	// ft_strcpy fonksiyonunu çağırarak source dizisini destination dizisine kopyala
	ft_strcpy((s1), s2);

	// Kopyalanan diziyi ekrana yazdır
	printf("%s\n", s1);

	return (0);
}
*/