/*Header 42*/
#include <stdio.h>
#include "libft.h"

static int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

int	ft_tolower(int c)
{
	unsigned char	letter;

	letter = (unsigned char)c;
	if (ft_islower(letter))
		return (letter);
	letter = c + 32;
	return (letter);
}
/*
int main(void)
{
    char letter = 'S';
    
    printf("Lowercase: %c\n", letter);
    letter = ft_tolower(letter);
    printf("Uppercase: %c\n", letter);
    return (0);
}
*/
