#include <stdlib.h>

// Mutlak değer hesaplayan fonksiyon
int	ft_abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

// Verilen iki sayı arasındaki tamsayıları içeren bir dizi oluşturan fonksiyon
int	*ft_range(int start, int end)
{
	int	size;
	int	i;
	int	*tab;
	int	*d;

	// Dizinin boyutunu hesapla
	size = ft_abs(end - start) + 1;
	d = (tab = malloc(size * sizeof(int)));
	// Bellek tahsisi başarısızsa NULL döndür
	if (!d)
		return (0);
	i = 0;
	// Eğer aralık sadece bir elemandan oluşuyorsa
	if (size == 1)
		tab[0] = start;
	// Başlangıç sayısı küçükse
	if (start < end)
	{
		while (i < size)
		{
			tab[i] = start + i;
			i++;
		}
	}
	// Başlangıç sayısı büyükse
	else if (start > end)
	{
		while (i < size)
		{
			tab[i] = start - i;
			i++;
		}
	}
	// Oluşturulan diziyi döndür
	return (tab);
}

/*
#include <stdio.h>

int	main(void)
{
	int	*tab;
	int	i;
	int	start;
	int	end;
	int	size;

	i = 0;
	start = 0;
	end = 0;
	size = ft_abs(end - start) + 1;
	// ft_range fonksiyonunu kullanarak dizi oluştur
	tab = ft_range(start, end);
	// Oluşturulan diziyi ekrana yazdır
	while (i < size)
	{
		printf("%i, ", tab[i]);
		i++;
	}
	// Bellekten elde edilen alanı serbest bırak
	return (0);
}
*/