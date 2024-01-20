#include <unistd.h>

// Sayıyı ekrana yazdıracak olan fonksiyon
void ft_write_number(int number)
{
	// Eğer sayı 9'dan büyükse, sayıyı 10'a böler ve tekrar fonksiyonu çağırır
	if (number > 9)
		ft_write_number(number / 10);
	
	// Sayının birler basamağını ekrana yazdırır
	write(1, &"0123456789"[number % 10], 1);
}

// Ana fonksiyon
int main(void)
{
	int number;

	number = 1;

	// 1'den 100'e kadar olan sayıları kontrol et
	while (number <= 100)
	{
		// FizzBuzz kurallarına göre kontrol yap
		if (number % 3 == 0 && number % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (number % 3 == 0)
			write(1, "fizz", 4);
		else if (number % 5 == 0)
			write(1, "buzz", 4);
		else
			// Sayı Fizz, Buzz veya FizzBuzz kurallarına uymuyorsa, ft_write_number fonksiyonu ile sayıyı yazdır
			ft_write_number(number);

		// Her durumun sonunda yeni bir satır karakteri ekle
		write(1, "\n", 1);

		// Sonraki sayıya geç
		number++;
	}

	return 0;
}
