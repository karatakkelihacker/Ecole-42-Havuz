#include <stdio.h>

// Özyineleme (recursive) kullanarak üs kuvveti hesaplayan fonksiyon
int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	// Üs kuvvetini hesapla
	if (power > 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	// Eğer üs kuvveti 0 ise, sonuç 1'dir
	if (power == 0)
		return (1);
	// Eğer üs kuvveti negatifse, sonuç tanımsızdır, bu durumda 0 döndür
	if (power < 0)
		return (0);
	return (result);
}

int	main(void)
{
	printf("%i", ft_recursive_power(5, 3));
}
