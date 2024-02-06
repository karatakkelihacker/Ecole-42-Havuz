#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	while(ac > 1)
	{
		ac--;

		while(av[ac][i])
		{
			write(1, &av[ac][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}