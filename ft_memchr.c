/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaetani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:51:38 by ggaetani          #+#    #+#             */
/*   Updated: 2026/01/16 15:51:41 by ggaetani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
The memchr() function locates the first occurrence of c (converted to an
unsigned char) in string s.

RETURN VALUES
The memchr() function returns a pointer to the byte located, or NULL if
no such byte exists within n bytes.
*/

#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	chr;
	size_t			i;

	chr = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == chr)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[] = "ciao";
	int		chr = 'a';
	printf("ptr: %p\n", ft_memchr(str, chr, 4));
}
*/
