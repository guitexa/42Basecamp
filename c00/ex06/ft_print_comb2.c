#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	left;
	char	right;

	left = 0;
	while (left <= 99)
	{
		right = 0;
		while (right <= 99)
		{
			if (left < right)
			{
				ft_putchar(left / 10 + 48);
				ft_putchar(left % 10 + 48);
				write(1, " ", 1);
				ft_putchar(right / 10 + 48);
				ft_putchar(right % 10 + 48);
				if (left != 98)
				{
					write(1, ", ", 2);
				}
			}
			right++;
		}
		left++;
	}
}

int main(void) {
	ft_print_comb2();
	return (0);
}