#include <unistd.h>

// Bu fonksiyon, verilen bir karakteri standart çıkışa yazdırır.
// Parametre: c - yazdırılacak karakter
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Bu program, komut satırından alınan ilk argümanın karakterlerini yazdırır.
// Parametre: argc - komut satırında verilen toplam argüman sayısı
// Parametre: argv - komut satırındaki argümanlar
int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	// argv[0] içindeki karakterleri yazdırır
	while (argv[0][i] != '\0' && argc)
	{
		ft_putchar(argv[0][i]);
		++i;
	}
	// Yeni bir satıra geçiş yapar
	ft_putchar('\n');
	// Programın başarılı bir şekilde sona erdiğini belirtir
	return (0);
}
