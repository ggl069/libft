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
static size_t	get_stridx(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;
	size_t	j;

		if (size == 0)
	{
		printf("return!!!!!!!!!!!!"); //debug
		return (0);
	}
	len = ft_strlen(src) + ft_strlen(dst);
	i = get_stridx(dst);
	j = 0;
	dst[i] = src[j];
	while (src[j] != '\0' && i != size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (size + ft_strlen(src));
}

int main(void)
{
	char	str[11] = "Hello";
	char	str1[] = "World";
	//printf("null_idx: %zu\n", get_stridx("ciao"));
	printf("str: %s\n", str);
	printf("len: %zu\n", ft_strlcat(str, str1, 11));
	printf("str: %s\n", str);
}
/*not working*/
