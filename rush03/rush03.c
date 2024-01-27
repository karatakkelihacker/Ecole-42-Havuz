#include <unistd.h>

void	ft_putchar(char c);

void	first_end_rows(int coloumn);

void	between_rows(int coloumn);

void	first_end_rows (int coloumn)
{
	int	i_coloumn;

	i_coloumn = 1;
	while (i_coloumn <= coloumn)
	{
		if (i_coloumn == 1)
		{
			ft_putchar (65);//A
		}
		else if (i_coloumn == 2 || i_coloumn != coloumn)
		{
			ft_putchar(66);//B
		}
		else
		{
			ft_putchar(67);//C
		}
		i_coloumn++;
	}
	ft_putchar ('\n');
}

void	between_rows (int coloumn)
{
	int	i_coloumn;

	i_coloumn = 1;
	while (i_coloumn <= coloumn)
	{
		if (i_coloumn == 1 || i_coloumn ==coloumn)
		{
			ft_putchar (66);//B
		}
		else
		{
			ft_putchar (32);//space
		}
		i_coloumn++;
	}
	ft_putchar('\n');
}

void	rush(int coloumn, int row)
{
	int i_row;

	i_row = 1;
	while(i_row <= row)
	{
		if (i_row == 1 || i_row == row)
		{
			first_end_rows (coloumn);
		}
		else
		{
			between_rows(coloumn);
		}
		i_row++;
	}
}
