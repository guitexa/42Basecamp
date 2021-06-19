// #include <stdio.h>
int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str1 = "escola";
// 	char	*str2 = "42";
// 	char	*str3 = "escola42sp";
// 	char	*str4 = "";
// 	int	rest1;
// 	int	rest2;
// 	int	rest3;
// 	int	rest4;

// 	rest1 = ft_str_is_alpha(str1);
// 	rest2 = ft_str_is_alpha(str2);
// 	rest3 = ft_str_is_alpha(str3);
// 	rest4 = ft_str_is_alpha(str4);
// 	printf("alphabetic %d\n", rest1);
// 	printf("numeric %d\n", rest2);
// 	printf("mixed %d\n", rest3);
// 	printf("empty %d\n", rest4);
// 	return (0);
// }
