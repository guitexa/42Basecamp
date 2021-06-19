// #include <stdio.h>
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str1[] = "escola";
// 	char	str2[] = "Escola";
// 	char	str3[] = "Escola42SP";
// 	char	str4[] = "return test";

// 	ft_strupcase(str1);
// 	ft_strupcase(str2);
// 	ft_strupcase(str3);
// 	printf("escola: %s\n", str1);
// 	printf("Escola: %s\n", str2);
// 	printf("Escola42SP: %s\n", str3);
// 	printf("return test: %s\n", ft_strupcase(str4));
// 	return (0);
// }
