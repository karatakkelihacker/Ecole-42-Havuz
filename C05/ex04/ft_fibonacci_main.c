#include <stdio.h>

// Fibonacci dizisinin belirli bir indeksindeki değeri hesaplayan fonksiyon
int	ft_fibonacci(int index)
{
	// Eğer indeks negatifse, sonuç tanımsızdır, bu durumda -1 döndür
	if (index < 0)
		return (-1);
	// Eğer indeks 2 veya daha küçükse, indeksi direkt olarak döndür
	if (index < 2)
		return (index);
	// Özyineleme kullanarak Fibonacci dizisinin belirli bir indeksindeki değeri hesapla
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

int	main(void)
{
	printf("%i", ft_fibonacci(7));
}
