#include <stdio.h>

// Bu fonksiyon, verilen bir sayının asal olup olmadığını kontrol eder.
// Parametre: nb - kontrol edilecek sayı
// Dönüş değeri: Sayı asalsa 1, değilse 0 döner.
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	// Sayı 1'den küçükse asal değildir.
	if (nb <= 1)
		return (0);
	// 2'den başlayarak (nb / 2)'ye kadar olan sayılarla kontrol yapılır.
	while (i <= (nb / 2))
	{
		// Eğer nb, i'ye bölünüyorsa asal değildir.
		if (!(nb % i))
			return (0);
		else
			i += 1;
	}
	// Yukarıdaki kontrollerden hiçbiri sağlanmazsa sayı asaldır.
	return (1);
}

int main (void)
{
	printf("%d -> %d\n", -3965, ft_is_prime(-3965));
	printf("%d -> %d\n", -12, ft_is_prime(-12));
	printf("%d -> %d\n", 0, ft_is_prime(0));
	printf("%d -> %d\n", 1, ft_is_prime(1));
	printf("%d -> %d\n", 2, ft_is_prime(2));
	printf("%d -> %d\n", 4219, ft_is_prime(4219));
	printf("%d -> %d\n", 2147483647, ft_is_prime(2147483647));
	return (0);
}