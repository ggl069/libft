// 42 header

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

/*
Takes as a parameter the address of a memory area that needs
to be freed with free(3), then puts the pointer to NULL.
*/
void	ft_memdel(void **ap)
{
	if (ap)
	{
		free(*ap);
		*ap = NULL;
	}
}

int	main(void)
{
	char	*str = malloc(sizeof(char) * 12);
	strcpy(str, "Hello World");
	ft_memdel((void **)&str);
	return (0);
}