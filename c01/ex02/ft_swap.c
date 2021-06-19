// #include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	number;

	number = *a;
	*a = *b;
	*b = number;
}

// int	main(void)
// {
// 	int	a = 10;
// 	int	b = 20;

// 	printf("%d\n", a);
// 	printf("%d\n", b);
// 	ft_swap(&a, &b);
// 	printf("%d\n", a);
// 	printf("%d\n", b);
// 	return (0);
// }
