#include <stdio.h>

// Bir karakter dizisinin uzunluğunu bulan fonksiyon
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	// Karakter dizisindeki karakterleri say
	while (str[i])
		i++;
	return (i); // Toplam karakter sayısını döndür
}

int main (void)
{
	printf("%i", ft_strlen("854dsjfksdlk"));
}
