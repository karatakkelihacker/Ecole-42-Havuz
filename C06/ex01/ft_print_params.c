#include <unistd.h>

// Bu fonksiyon, verilen bir karakteri standart çıkışa yazdırır.
// Parametre: c - yazdırılacak karakter
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Bu program,komut satırından alınan her bir argümanın karakterlerini yeni satır ile ayrı ayrı yazdırır.
// Parametre: argc - komut satırında verilen toplam argüman sayısı
// Parametre: argv - komut satırındaki argümanlar
int	main(int argc, char *argv[])
{
	int i, j;
	// Argümanları bir döngü içinde dolaşır
	j = 1;
	while (j < argc)
	{
		// Her bir karakteri yazdırmak için iç içe döngü kullanılır
		i = 0;
		while (argv[j][i] != '\0')
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		// Her bir argümanın sonuna geldiğinde yeni bir satıra geçer
		ft_putchar('\n');
		j++;
	}
	// Programın başarılı bir şekilde sona erdiğini belirtir
	return (0);
}
