// 42 header

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/*
Allocates (with malloc(3)) and returns a “fresh” string end-
ing with ’\0’. Each character of the string is initialized at
’\0’. If the allocation fails the function returns NULL.

Param. #1 The size of the string to be allocated.

Return value The string allocated and initialized to 0.
*/
char	*ft_strnew(size_t size)
{
	char	*arr;
	size_t	i;

	arr = malloc(size + 1);
	if (!arr)
		return(NULL);
	i = 0;
	while (i < size + 1)
	{
		arr[i] = '\0';
		i++;
	}

	return (arr);
}

/*
int main(void)
{
	char *ex = ft_strnew(44); //0x0000000141904180 ""  -> 0x0000000141904180 ""
	printf("ex: %s\n", ex);
	return (0);
}
*/