// 42 header

#include <stdlib.h>
#include "libft.h"

/*
Description 	Applies the function f to each character of the string passed
				as argument by giving its index as first argument to create a
				“fresh” new string (with malloc(3)) resulting from the suc-
				cessive applications of f.

Param. #1		The string to map.
Param. #2		The function to apply to each character of s and its index.

Return value	The “fresh” string created from the successive applications off.
*/

char * ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
			str[i] = f(i, s[i]);
			i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	upper_test(unsigned int i, char c)
{
	if (i % 2 == 0)
	{
		if (c >= 'a' && c <= 'z')
			return (c - 32);
	}
	else
	{
		if (c >= 'A' && c <= 'Z')
			return (c + 32);
	}
	return (c);
}

int	main(void)
{
	char	*originale = "Hello World!";
	char	*risultato;

	printf("Stringa originale: '%s'\n", originale);

	risultato = ft_strmapi(originale, upper_test);

	printf("Stringa mappata:   '%s'\n", risultato);
	return (0);
}
*/