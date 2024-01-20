#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	int seen[128]; // Her ASCII karakteri temsil eden bir dizi
	// İki giriş dizisi olup olmadığını kontrol et
	if (argc == 3)
	{
		// seen dizisini sıfırla
		i = 0;
		while (i < 128)
			seen[i++] = 0;
		// İlk giriş dizisindeki karakter sayılarını takip et
		i = 0;
		while (argv[1][i])
		{
			seen[argv[1][i]] += 1;
			i++;
		}
		// İkinci giriş dizisindeki karakterleri işle ve işaretliyor
		i = 0;
		while (argv[2][i])
		{
			if (seen[argv[2][i]] == 1)
				seen[argv[2][i]] = 2;
			i++;
		}
		// İlk giriş dizisinde işaretli karakterleri ekrana yazdır
		i = 0;
		while (argv[1][i])
		{
			if (seen[argv[1][i]] == 2)
			{
				write(1, &argv[1][i], 1);
				seen[argv[1][i]] = 0; // İşlem yapılan karakteri sıfırla
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
