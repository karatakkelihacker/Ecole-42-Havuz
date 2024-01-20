#include <unistd.h>

int main(int ac, char **av)
{
	int i;

	i = 0;

	// En az bir argüman varsa
	if (ac > 1)
	{
		// Son argümanın indisini azalt
		ac--;

		// Son argümanın karakterlerini tersine çevirerek ekrana yazdır
		while (av[ac][i] != '\0')
		{
			write(1, &av[ac][i], 1);
			i++;
		}
	}

	// Yeni satır karakteri ekleyerek çıktıyı sonlandır
	write(1, "\n", 1);

	return (0);
}
