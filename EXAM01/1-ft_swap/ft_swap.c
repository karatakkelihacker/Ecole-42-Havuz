void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
#include <stdio.h>

int	main()
{
	int x = 5;
	int y = 8;

	ft_swap(&x, &y);
	printf("%d\n", x);
	printf("%d", y);
	return 0;
}
*/
