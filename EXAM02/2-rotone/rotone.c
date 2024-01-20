#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	ltr;

	// İterasyon için kullanılacak sayaç ve karakter değişkeni tanımlanıyor
	i = 0;
	ltr = argv[1][i];
	// Eğer doğru sayıda argüman varsa devam ediliyor
	if (argc == 2)
	{
		// Girdi dizisinin sonuna kadar karakterleri kontrol et
		while (argv[1][i])
		{
			// Eğer karakter büyük harfse ve 'Y' harfine kadar ise bir sonraki harfe geçiliyor
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Y')
				ltr += 1;
			// Eğer karakter küçük harfse ve 'y' harfine kadar ise bir sonraki harfe geçiliyor
			if (argv[1][i] >= 'a' && argv[1][i] <= 'y')
				ltr += 1;
			// Eğer karakter 'Z' veya 'z' ise, 25 harf geri gidiliyor
			if (argv[1][i] == 'Z' || argv[1][i] == 'z')
				ltr -= 25;
			// Dönüştürülmüş karakter ekrana yazdırılıyor
			write(1, &ltr, 1);
			i += 1;
		}
	}
	// Yeni satır karakteri ekranı temizlemek için yazdırılıyor
	write(1, "\n", 1);
	return (0);
}
