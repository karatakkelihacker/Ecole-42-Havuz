#include <unistd.h>

// Tek bir karakteri ekrana yazdırmak için yardımcı fonksiyon
void	ft_putchar(char a)
{
	write(1, &a, 1);
}

// 0 ile 99 arasındaki ikili kombinasyonları ekrana yazdıran fonksiyon
void	ft_print_comb2(void)
{
	int	a;
	int	b;

	// İlk sayıyı temsil eden değişken
	a = -1;
	// İlk döngü, ilk rakamı temsil eden 'a' değişkenini arttırarak çalışır
	while (a++ < 98)
	{
		// İkinci sayıyı temsil eden değişken
		b = a;
		// İkinci döngü, 'b' değişkenini arttırarak çalışır
		while (b++ < 99)
		{
			// İlk rakamın onlar basamağını yazdır
			ft_putchar((a / 10) + '0');
			// İlk rakamın birler basamağını yazdır
			ft_putchar((a % 10) + '0');
			// Boşluk karakterini yazdır
			ft_putchar(' ');
			// İkinci rakamın onlar basamağını yazdır
			ft_putchar((b / 10) + '0');
			// İkinci rakamın birler basamağını yazdır
			ft_putchar((b % 10) + '0');
			// Eğer bu kombinasyon son kombinasyon değilse virgül ve boşluk karakterini yazdır
			if (a != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}

int	main(void)
{
	// ft_print_comb2 fonksiyonunu çağırarak ikili kombinasyonları ekrana yazdır
	ft_print_comb2();
	// Programın başarıyla tamamlandığını belirtmek için 0 değerini döndür
	return (0);
}
