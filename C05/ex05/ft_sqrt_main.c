#include <stdio.h>

// Bir sayının karekökünü hesaplayan fonksiyon
int	ft_sqrt(int nb)
{
	long	index;
	long	b;

	b = nb;
	// Eğer sayı negatif veya 0 ise, karekök tanımsızdır, bu durumda 0 döndür
	if (b <= 0)
	{
		return (0);
	}
	// Eğer sayı 1 ise, karekök 1'dir
	if (b == 1)
	{
		return (1);
	}
	index = 2;
	// Eğer sayı 2 veya daha büyükse, karekökü hesapla
	if (b >= 2)
	{
		while (index * index <= b)
		{
			// Karekök bulunduğunda, index'i döndür
			if (index * index == b)
			{
				return (index);
			}
			index++;
		}
	}
	// Karekök bulunamadığında, 0 döndür
	return (0);
}

int	main(void)
{
	printf("sqrt of %d is %d\n", -20, ft_sqrt(-20));
	printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
	printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
	printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
	printf("sqrt of %d is %d\n", 20, ft_sqrt(20));
	return (0);
}
