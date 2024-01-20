#include <stdio.h>

// Özyineleme (recursive) kullanarak faktöriyel hesaplayan fonksiyon
int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	// Sayının faktöriyelini hesapla
	if (nb > 0)
	{
		result *= nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	// Sayı negatifse, faktöriyel tanımsızdır, bu durumda 0 döndür
	if (nb < 0)
		return (0);
	return (result);
}

int	main(void)
{
	printf("%i", ft_recursive_factorial(9));
}
