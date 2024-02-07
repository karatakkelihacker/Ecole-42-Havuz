#include <stdio.h>

int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			sign *= -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = (str[i] - 48) + (result * 10);
		i++;
	}
	return (result * sign);

}
int main(void)
{
	char *str = "   ---+++12345ab567";
	printf("%d", ft_atoi(str));
}
