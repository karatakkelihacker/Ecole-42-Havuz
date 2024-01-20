#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	// Komut satırında en az bir argüman varsa
	if (ac == 2)
	{
		// Argümanın her karakterini kontrol et
		while (av[1][i] != '\0')
		{
			// 'a' karakterini bulduğumuzda
			if (av[1][i] == 'a')
			{
				// 'a' karakterini ekrana yazdır ve döngüden çık
				write(1, "a", 1);
				break ;
			}
			i++;
		}
		// Satır sonu karakterini ekrana yazdır
		write(1, "\n", 1);
	}
	else
		// Argüman yoksa, sadece "a\n" stringini ekrana yazdır
		write(1, "a\n", 2);
	return (0);
}
