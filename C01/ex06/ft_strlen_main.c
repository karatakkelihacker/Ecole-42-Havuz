#include <stdio.h>

int	ft_strlen(char *string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main()
{
	char *str = "42Kocaeli";
	printf("%d", ft_strlen(str));
}
