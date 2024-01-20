void	ft_swap(int *a, int *b)
{
	int	rev;

	rev = *a;
	*a = *b;
	*b = rev;
}

/*
#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;

	x = 3;
	y = 4;
	ft_swap(&x, &y);
	printf("%d, %d", x, y);
}
*/