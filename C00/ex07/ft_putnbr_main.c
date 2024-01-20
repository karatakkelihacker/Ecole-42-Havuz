#include <unistd.h>

// Tek bir karakteri ekrana yazdırmak için yardımcı fonksiyon
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Tamsayıyı ekrana yazdırmak için fonksiyon
void	ft_putnbr(int nb)
{
	// Eğer tamsayı -2147483648 ise özel durumu ele al
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648); // -2147483648'in pozitif karşılığı
	}
	// Eğer tamsayı negatifse, negatif işareti yazdır, pozitife çevir ve fonksiyonu tekrar çağır
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	// Eğer tamsayı 9'dan büyükse, onlar basamağını ve birler basamağını ayrı ayrı yazdır
	else if (nb > 9)
	{
		ft_putnbr(nb / 10); // onlar basamağı yazdır
		ft_putnbr(nb % 10); // birler basamağı yazdır
	}
	// Eğer tamsayı 9 veya daha küçükse, yani bir basamaklı ise, doğrudan yazdır
	else
	{
		ft_putchar(nb + 48); // ASCII değeri ile doğrudan yazdırma
	}
}

int	main(void)
{
	ft_putnbr(4563);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(5);
	ft_putchar('\n');
}
