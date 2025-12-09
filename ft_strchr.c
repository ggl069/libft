//Header 42

/*
DESCRIPTION
The strchr() function locates the first occurrence of c (converted to a
char) in the string pointed to by s.  The terminating null character is
considered part of the string; therefore if c is ‘\0’, the functions
locate the terminating ‘\0’.

The strrchr() function is identical to strchr() except it locates the
last occurrence of c.

The strchrnul() function is identical to strchr() except that if c is not
found in s a pointer to the terminating ‘\0’ is returned.

RETURN VALUES
The functions strchr() and strrchr() return a pointer to the located
character, or NULL if the character does not appear in the string.

strchrnul() returns a pointer to the terminating ‘\0’ if the character
does not appear in the string.
*/

#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*letter;

	letter = (char *)c;
	while (s)
	{
		if (s == letter)

			return (s);
		s++;
	}
	return (NULL);
}

int	main(void)
{
	char str[] = "ciao";
	char chr = 'a';

	printf("ptr: %p", ft_strchr(str, chr));
}