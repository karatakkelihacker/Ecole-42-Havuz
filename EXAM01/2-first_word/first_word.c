#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	// Başlangıçta sayaç i'yi sıfıra ayarla
	i = 0;
	// Eğer komut satırında sadece bir argüman varsa devam et
	if (ac == 2)
	{
		// Boşluk veya sekme karakterleriyle başlayanları atla
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		// Boşluk, sekme veya null karakteriyle karşılaşana kadar karakterleri yazdır
		while (av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t')
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
    write(1, "\n", 2);
	return (0);
}
