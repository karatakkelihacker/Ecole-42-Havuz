#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	// Eğer sadece bir argüman varsa
	if (ac == 2)
	{
		// Argümanın her karakterini kontrol et
		while (av[1][i] != '\0')
		{
			// Eğer büyük harfse küçük harfe, küçük harfse büyük harfe çevir
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] += 32;
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] -= 32;
			// Karakteri ekrana yazdır
			write(1, &av[1][i], 1);
			// Sonraki karaktere geç
			i++;
		}
	}
	// Yeni satır karakteri ekleyerek çıktıyı sonlandır
	write(1, "\n", 1);
	return (0);
}
