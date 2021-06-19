// #include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	aux1;
	int	aux2;

	aux1 = 0;
	aux2 = 0;
	size--;
	while (aux1 < size)
	{
		aux2 = tab[size];
		tab[size] = tab[aux1];
		tab[aux1] = aux2;
		size--;
		aux1++;
	}
}

// void	ft_print_numbers(int *tab, int size)
// {
// 	int i = 0;
// 	while (i < size)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// }

// int    main(void)
// {
//     int    tab[5] = {1, 2, 3, 4, 5};
//     int    size;

// 	size = 5;

//     ft_print_numbers(tab, size);
//     ft_rev_int_tab(tab, size);
//     ft_print_numbers(tab, size);

// 	return (0);
// }
