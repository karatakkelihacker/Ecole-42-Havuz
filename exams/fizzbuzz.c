#include <unistd.h>

int main(void)
{
	int number;

	number = 1;
	while (number <= 100)
	{
		if (number % 3 == 0 && number % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (number % 3 == 0)
			write(1, "fizz", 4);
		else if (number % 5 == 0)
			write(1, "buzz", 4);
		else if (!(number % 3 == 0 && number % 5 == 0) && number > 9)
		{
			int a = number / 10;
			a += 48;
			write(1, &a, 1);
			a = number % 10;
			a += 48;
			write(1, &a, 1);
		}
		else if (!(number % 3 == 0 && number % 5 == 0) && number < 10)
		{
			int b;
			b = number % 10;
			b += 48;
			write(1, &b, 1);
		}
		write(1, "\n", 1);

		number++;
	}
	return 0;
}
