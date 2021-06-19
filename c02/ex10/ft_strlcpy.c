// #include <stdio.h>
// #include <bsd/string.h>
// #include <stdlib.h>
unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lengh;

	i = 0;
	lengh = 0;
	while (src[lengh])
		lengh++;
	if (size < 1)
		return (lengh);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (lengh);
}

// int	main(void)
// {
// 	int 	src_size;
// 	int 	dest_size = 8;
// 	char 	*src;
// 	char 	*dest;

// 	src = calloc(11, sizeof(char));
// 	dest = calloc(dest_size, sizeof(char));
// 	src = "alo galera";
// 	src_size = ft_strlcpy(dest, src, dest_size);
// 	printf("src: %s\n", src);
// 	printf("dest: %s\n", dest);
// 	printf("src_size: %d\n", src_size);
// 	printf("dest_size: %d\n", dest_size);
// 	return(0);
// }
