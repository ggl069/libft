// 42 header

#include <stdlib.h>
#include "libft.h"

/*
Description 	Allocates (with malloc(3)) and returns a “fresh” substring
				from the string given as argument. The substring begins at
				indexstart and is of size len. If start and len aren’t refer-
				ing to a valid substring, the behavior is undefined. If the
				allocation fails, the function returns NULL.

Param. #1 		The string from which create the substring.
Param. #2 		The start index of the substring.
Param. #3 		The size of the substring. 

Return value 	The substring.
*/
char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub_str;

	if (!s || start > ft_strlen(s))
		return (NULL);
	sub_str = malloc(sizeof(char) * (len + 1));
	if (!sub_str)
		return (NULL);
	i = start;
	while (s[i] != '\0' && i < len + start)
	{
		sub_str[i - start] = s[i];
		i++;
	}
	sub_str[i - start] = '\0';
	return (sub_str);	
}

/*
int main(void)
{
    char    *s = "Hello world";
    char    *res;

    res = ft_strsub(s, 0, 4);
    printf("Test 1: [%s]\n", res);
    free(res);

    res = ft_strsub(s, 4, 100);
    printf("Test 2: [%s]\n", res);
    free(res);
    
    return (0);
}
*/