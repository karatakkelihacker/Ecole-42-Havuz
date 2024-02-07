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
	int len;
	char tmp;
	len = ft_strlen(str) - 1;

	while(len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}

#include <stdio.h>

int main()
{
	char str[] = "Merhaba";
	ft_strrev(str);
	printf("%s", str);
}