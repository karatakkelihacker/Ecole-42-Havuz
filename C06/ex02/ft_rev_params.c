#include <unistd.h>

// Bu fonksiyon, verilen bir karakteri standart çıkışa yazdırır.
// Parametre: c - yazdırılacak karakter
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Bu program, komut satırından alınan her bir argümanın karakterlerini ters sıra ile yazdırır.
// Parametre: argc - komut satırında verilen toplam argüman sayısı
// Parametre: argv - komut satırındaki argümanlar
int	main(int argc, char *argv[])
{
	int i, j;
	// Argümanları ters sıra ile bir döngü içinde dolaşır
	i = argc - 1;
	while (i > 0)
	{
		// Her bir karakteri yazdırmak için iç içe döngü kullanılır
		j = 0;
		while (argv[i][j] != '\0' && argc)
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		// Her bir argümanın sonuna geldiğinde yeni bir satıra geçer
		ft_putchar('\n');
		i--;
	}
	// Programın başarılı bir şekilde sona erdiğini belirtir
	return (0);
}
