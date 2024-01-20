#include <unistd.h>

// İki girdi dizge arasındaki birleşimi (union) bulan fonksiyon
void	ft_union(char *str, char *str2)
{
	int	tab[256] = {0};
	int	a;

	// Her karakterin görülüp görülmediğini tutan bir dizi
	// İlk dizgeyi tarayarak birleşimi bul
	a = 0;
	while (str[a])
	{
		// Karakter daha önce görülmediyse
		if (tab[(int)str[a]] == 0)
		{
			// Karakteri ekrana yazdır ve görüldü olarak işaretle
			tab[(int)str[a]] = 1;
			write(1, &str[a], 1);
		}
		a++;
	}
	// İkinci dizgeyi tarayarak birleşimi bul
	a = 0;
	while (str2[a])
	{
		// Karakter daha önce görülmediyse
		if (tab[(int)str2[a]] == 0)
		{
			// Karakteri ekrana yazdır ve görüldü olarak işaretle
			tab[(int)str2[a]] = 1;
			write(1, &str2[a], 1);
		}
		a++;
	}
}

int	main(int ac, char **av)
{
	// İki argüman varsa birleşimi bul ve ekrana yazdır
	if (ac == 3)
		ft_union(av[1], av[2]);
	// Yeni satıra geç
	write(1, "\n", 1);
	return (0);
}
