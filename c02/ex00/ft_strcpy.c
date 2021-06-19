// #include <stdio.h>
char	*ft_strcpy (char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int		main(void)
// {
// 	char src[] = "123456789";
// 	char dest[] = "         ";

// 	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", src, dest);
//     ft_strcpy(dest, src);
// 	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", src, dest);
// 	return (0);
// }
