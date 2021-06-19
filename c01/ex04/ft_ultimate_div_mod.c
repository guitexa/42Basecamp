// #include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a / *b;
	y = *a % *b;
	*a = x;
	*b = y;
}

// int	main(void)
// {
// 	int a, b;
// 	a = 150;
// 	b = 20;

// 	ft_ultimate_div_mod(&a, &b);

// 	printf("div is %d\nmod is %d\n", a, b);

// 	return (0);
// }
