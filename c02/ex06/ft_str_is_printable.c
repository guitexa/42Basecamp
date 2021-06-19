// #include <stdio.h>
int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
			return (0);
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str1 = "ABCDEFGHI";
// 	char	*str2 = "123456789";
// 	char	*str3 = "";
// 	int	rest1;
// 	int	rest2;
// 	int	rest3;

// 	rest1 = ft_str_is_printable(str1);
// 	rest2 = ft_str_is_printable(str2);
// 	rest3 = ft_str_is_printable(str3);
// 	printf("alphabetics %d\n", rest1);
// 	printf("numbers %d\n", rest2);
// 	printf("no printables %d\n", rest3);
// 	return(0);
// }
