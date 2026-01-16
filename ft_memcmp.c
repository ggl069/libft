/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaetani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:53:13 by ggaetani          #+#    #+#             */
/*   Updated: 2026/01/16 15:53:15 by ggaetani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The memcmp() function compares byte string s1 against byte string s2.
Both strings are assumed to be n bytes long.

The memcmp() function returns zero if the two strings are identical,
otherwise returns the difference between the first two differing bytes
(treated as unsigned char values, so that ‘\200’ is greater than ‘\0’,
for example).  Zero-length strings are always identical.  This behavior
is not required by C and portable code should only depend on the sign of
the returned value.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	printf("cmp: %d", ft_memcmp("astronauta", "astrolopiteco", 6));
}
