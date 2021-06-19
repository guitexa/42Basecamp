// #include <stdio.h>
int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

// int	main(void)
// {
// 	char *str;
// 	int count;
// 	str = "stringwith22characters";

// 	count = ft_strlen(str);
// 	printf("%d\n", count);

// 	return (0);
// }
