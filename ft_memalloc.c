// 42 header

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

/*
Allocates (with malloc(3)) and returns a “fresh” memory
area. The memory allocated is initialized to 0. If the alloca-
tion fails, the function returns NULL.
*/
void	*ft_memalloc(size_t size)
{
	char	*arr;
	
	arr = malloc(size);
	if (!arr)
	{
		return (NULL);
	}
	ft_bzero(arr, size);
	return (arr);
}

int	main(void)
{
	char	str[] = "hello world";

	printf("return: %p", ft_memalloc(12));
	return (0);
}