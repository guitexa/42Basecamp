void	ft_putchar(char c);
void	print_first_line(int x);
void	print_mid_line(int x, int y);
void	print_last_line(int x, int y);

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		print_first_line(x);
		print_mid_line(x, y);
		print_last_line(x, y);
	}
}

void	print_first_line(int x)
{
	ft_putchar('o');
	while (x - 2 > 0 )
	{
		ft_putchar('-');
		x--;
	}
	if (x > 1)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	print_mid_line(int x, int y)
{
	int	count_number_lines;
	int	count_empty_space;

	count_number_lines = y - 2;
	while (count_number_lines > 0 )
	{
		ft_putchar('|');
		count_empty_space = x - 2;
		while (count_empty_space > 0 )
		{
			ft_putchar (' ');
			count_empty_space--;
		}
		if (x > 1 )
		{
			ft_putchar ('|');
		}
		ft_putchar ('\n');
		count_number_lines--;
	}
}

void	print_last_line(int x, int y)
{
	if (y > 1)
	{
		ft_putchar('o');
		while (x - 2 > 0 )
		{
			ft_putchar('-');
			x--;
		}
		if (x > 1 )
		{
			ft_putchar('o');
		}
		ft_putchar('\n');
	}
}
