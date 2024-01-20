#include <stdio.h>

// İteratif (döngü kullanarak) üs kuvveti hesaplayan fonksiyon
int ft_iterative_power(int nb, int power)
{
    int result = nb;

    // Üs kuvvetini hesapla
    while (power > 1)
    {
        result *= nb;
        power--;
    }

    // Eğer üs kuvveti 0 ise, sonuç 1'dir
    if (power == 0)
        return 1;

    // Eğer üs kuvveti negatifse, sonuç tanımsızdır, bu durumda 0 döndür
    if (power < 0)
        return 0;

    return result;
}

int	main(void)
{
	printf("%i", ft_iterative_power(3, 4 ));
}
