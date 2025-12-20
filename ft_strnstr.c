//Header 42

/*
DESCRIPTION
The strnstr() function locates the first occurrence of the null-
terminated string needle in the string haystack, where not more than len
characters are searched.  Characters that appear after a ‘\0’ character
are not searched.

RETURN VALUES
If needle is an empty string, haystack is returned; if needle occurs
nowhere in haystack, NULL is returned; otherwise a pointer to the first
character of the first occurrence of needle is returned.
*/

#include <stdio.h>
#include "libft.h"

/*The functions uses a attention function named "att" that is incremented when the haystack cell fit's with needle first cell, if this condition still true for the entire needle len the index cell index is calculed and returned*/
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	att;
	size_t	ndlen;

	i = 0;
	j = 0;
	att = 0;
	ndlen = ft_strlen(needle);
	if (ndlen == 0)
		return ((char *)haystack);
	if (ndlen > len)
		return (0);
	while (att != ndlen && i < len && haystack[i] != '\0')
	{
		att = 0;
		j = i;
		if (haystack[j] == needle[att])
		{
			while (haystack[j] == needle[att] && att != ndlen && j < len)
			{
				att++;
				j++;
			}
			if (att == ndlen)
				break;

		}
		i++;
	}
	if (att == ndlen)
		return((char *)&haystack[i]);
	else
		return (0);
}

/*
int	main(void)
{
	char	haystr[] = "aaabc";//"ciaoluigimario\0penzolo\0caio";
	char 	ndl[] = "aabc";//"mario";

	printf("ptr: %p\n", ft_strnstr(haystr, ndl, 60));
}
*/