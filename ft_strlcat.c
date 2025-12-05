/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaetani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 17:27:12 by ggaetani          #+#    #+#             */
/*   Updated: 2025/12/04 17:27:13 by ggaetani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
The strlcpy() and strlcat() functions copy and concatenate strings with
the same input parameters and output result as snprintf(3).  They are
designed to be safer, more consistent, and less error prone replacements
for the easily misused functions strncpy(3) and strncat(3).
*/

/*modified version of ft_strlen that stop counting if i >= size*/
static size_t	sized_strlen(const char *str, size_t size)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0' && i < size)
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = sized_strlen(dst, size);
	j = 0;
	len = i + ft_strlen(src);
	if (i >= size || size <= 0)
	{
		return (len);
	}
	while (src[j] != '\0' && i != size - 1 && i < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len);
}
/*
int main(void)
{
	char	str[11] = "Hello";
	char	str1[] = "World";
	//printf("null_idx: %zu\n", sized_strlen("ciao"));
	printf("str: %s\n", str);
	printf("len: %zu\n", ft_strlcat(str, str1, 3));
	printf("str: %s\n", str);
}
*/