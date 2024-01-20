#include <unistd.h>

// Belirtilen karakter dizisini standart çıkışa yazan fonksiyon
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	// Karakter dizisindeki karakterleri yazdır
	while (str[i] != '\0')
	{
		write(1, &str[i], 1); // write fonksiyonu ile karakteri yaz
		i++;
	}
}

int	main(void)
{
	ft_putstr("Hello World!");
}
