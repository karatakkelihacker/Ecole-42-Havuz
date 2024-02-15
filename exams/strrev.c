int		ft_strlen(char *str)
{
	int i = 0;

	while(str[i])
		i++;
	return (i);
}

char *ft_strrev(char *str)
{
	int i = 0;
	int j;

	j = ft_strlen(str);
	j--;

	while(j > i)
	{
		int tmp;

		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		j--;
		i++; 
	}
	return str;
}

#include <stdio.h>

int main()
{
	char str[] = "kara";
	printf("%s", ft_strrev(str));
}