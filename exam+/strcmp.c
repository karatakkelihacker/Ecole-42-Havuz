#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while(s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] -s2[i]);
}

int main()
{
	char s1[] = "kocaeli";
	char s2[] = "kocaeli";

	printf("%d", ft_strcmp(s1, s2));
}