#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab [i];
				tab[i] = tab [i + 1];
				tab [i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}
int	main()
{
	int tab[6] = {7, 6, 3, 4, 2, 5};
	int size = 6;
	int i = 0;

	ft_sort_int_tab(tab, size);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	return (0);
}	
