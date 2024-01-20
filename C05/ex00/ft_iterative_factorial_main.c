#include <stdio.h>

// İteratif (döngü kullanarak) olarak faktöriyel hesaplayan fonksiyon
int	ft_iterative_factorial(int nb)
{
	unsigned int	result;

	result = 1;
	// Sayının faktöriyelini hesapla
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	// Sayı negatifse, faktöriyel tanımsızdır, bu durumda 0 döndür
	if (nb < 0)
	{
		return (0);
	}
	return (result);
}

int	main(void)
{
	printf("%i", ft_iterative_factorial(3));
}
