#include <stdio.h>

// Bu fonksiyon, verilen bir sayının asal olup olmadığını kontrol eder.
// Dönüş değeri: Sayı asalsa 1, değilse 0 döner.
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	// Sayı 2'den küçükse asal değildir.
	if (nb < 2)
		return (0);
	// 2'den başlayarak nb'nin kareköküne kadar olan sayılarla kontrol yapılır.
	while (i <= nb / i)
	{
		// Eğer nb, i'ye bölünüyorsa asal değildir.
		if (nb % i == 0)
			return (0);
		i++;
	}
	// Yukarıdaki kontrollerden hiçbiri sağlanmazsa sayı asaldır.
	return (1);
}

// Bu fonksiyon, verilen bir sayının sonraki asal sayıyı bulur.
int	ft_find_next_prime(int nb)
{
	// Sayı 2'den küçükse 2 döndürülür.
	if (nb < 2)
		return (2);
	// nb'den başlayarak sonraki asal sayı bulunur.
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	// Hiçbir asal sayı bulunamazsa 0 döndürülür.
	return (0);
}

int	main(void)
{
	printf("%d -> %d\n", -2316, ft_find_next_prime(-2316));
	printf("%d -> %d\n", 0, ft_find_next_prime(0));
	printf("%d -> %d\n", 1, ft_find_next_prime(1));
	printf("%d -> %d\n", 2, ft_find_next_prime(2));
	printf("%d -> %d\n", 7853, ft_find_next_prime(7853));
	printf("%d -> %d\n", 78989, ft_find_next_prime(78989));
	printf("%d -> %d\n", 2147483643, ft_find_next_prime(2147483643));
	printf("%d -> %d\n", 2147483645, ft_find_next_prime(2147483645));
	printf("%d -> %d\n", 2147483646, ft_find_next_prime(2147483646));
	printf("%d -> %d\n", 2147483647, ft_find_next_prime(2147483647));
	return (0);
}