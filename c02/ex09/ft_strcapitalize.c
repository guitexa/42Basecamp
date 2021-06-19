// #include <stdio.h>
char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
		else if ((str[i] >= 'a' && str[i] <= 'z') && \
		!(str[i - 1] >= 'A' && str[i - 1] <= 'Z') && \
		!(str[i - 1] >= '0' && str[i - 1] <= '9') && \
		!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
			str[i] -= 32;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char str[] = "oi, tudo bem? 42palavras quarenta-e-DUAS; cinquenta+e+um";

// 	ft_strcapitalize(str);
// 	printf("%s\n", str);
// 	return (0);
// }
