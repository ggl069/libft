/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaetani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:50:20 by ggaetani          #+#    #+#             */
/*   Updated: 2025/12/01 18:50:24 by ggaetani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;
	int len;

	if (!dst || !src)	/*extreme case handling*/
		return (0);
	len = ft_strlen(src);
	i = 0;
	while (dst[i] != '\0' && i != size - 1)
	{
		dst[i] = src[i];
		i++;
	}

	dst[i] = '\0';
	return (len);
}

int	main(void)
{
	char	str[] = "ciao";
	char	dst_str[8];

	printf("before: %s\n", dst_str);
	printf("%zu\n", ft_strlcpy(dst_str, str, 5));
	//printf("%d\n", strlcpy(dst_str, str, 5));
	printf("after: %s\n", dst_str);
}
/*non finito*/
