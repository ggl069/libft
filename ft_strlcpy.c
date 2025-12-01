//header 42
//lib

/*
The strlcpy() and strlcat() functions copy and concatenate strings with
the same input parameters and output result as snprintf(3).  They are
designed to be safer, more consistent, and less error prone replacements
for the easily misused functions strncpy(3) and strncat(3).

	The snprintf() and vsnprintf() functions will write at most size-1 of the
    characters printed into the output string (the size'th character then
    gets the terminating ‘\0’); if the return value is greater than or equal
    to the size argument, the string was too short and some of the printed
    characters were discarded.  The output is always null-terminated, unless
    size is 0.
*/

#include <stdio.h>

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	int	i;

	if (!dst || !src)
		return (0);
	i = 0;
	while (dst[i] != '\0' && i != dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}

int	main(void)
{
	char str[] = "ciao";
	char dst_str[8];
	
	printf("before: %s\n", dst_str);
	ft_strlcpy(dst_str, str, 1);
	printf("after: %s\n", dst_str);
}