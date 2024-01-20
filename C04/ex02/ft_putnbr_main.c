#include <unistd.h>
// Tek bir karakteri yazdıran fonksiyon
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Tamsayıyı ekrana yazdıran fonksiyon
void	ft_putnbr(int nb)
{
	// Minimum tamsayı değeri (-2147483648) için özel durum kontrolü
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648); // -2147483648'i yazdırmak için özel durumu tekrar çağır
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0'); // Tek basamaklı tamsayıyı yazdır
	}
}
int	main(void)
{
	ft_putnbr(4563);
}
