#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	// Komut satırında tam olarak bir argüman olduğunu kontrol et
	if (argc == 2)
	{
		// Girdi dizisindeki her karakteri kontrol et
		while (argv[1][i])
		{
			// Karakterin küçük harf olup olmadığını kontrol et
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] += (argv[1][i] + 13 <= 'z') ? 13 : -13;
			// Karakterin büyük harf olup olmadığını kontrol et
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i] += (argv[1][i] + 13 <= 'Z') ? 13 : -13;
			i++;
		}
		i = 0;
		// Dönüştürülmüş diziyi ekrana yazdır
		while (argv[1][i])
			write(1, &argv[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
