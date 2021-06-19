// #include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str1[] = "ESCOLA";
// 	char	str2[] = "Escola";
// 	char	str3[] = "Escola42SP";
// 	char	str4[] = "RETURN TEST";

// 	ft_strlowcase(str1);
// 	ft_strlowcase(str2);
// 	ft_strlowcase(str3);
// 	printf("ESCOLA: %s\n", str1);
// 	printf("Escola: %s\n", str2);
// 	printf("Escola42SP: %s\n", str3);
// 	printf("RETURN TEST: %s\n", ft_strlowcase(str4));
// 	return (0);
// }
