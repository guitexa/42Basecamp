// #include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str1 = "escola";
// 	char	*str2 = "ESCOLA";
// 	char	*str3 = "42";
// 	char	*str4 = "Escola42SP";
// 	char	*str5 = "";
// 	int	rest1;
// 	int	rest2;
// 	int	rest3;
// 	int	rest4;
// 	int	rest5;

// 	rest1 = ft_str_is_lowercase(str1);
// 	rest2 = ft_str_is_lowercase(str2);
// 	rest3 = ft_str_is_lowercase(str3);
// 	rest4 = ft_str_is_lowercase(str4);
// 	rest5 = ft_str_is_lowercase(str5);
// 	printf("lowercase alphabetic %d\n", rest1);
// 	printf("uppercase alphabetic %d\n", rest2);
// 	printf("numeric %d\n", rest3);
// 	printf("mixed %d\n", rest4);
// 	printf("empty %d\n", rest5);
// 	return (0);
// }
