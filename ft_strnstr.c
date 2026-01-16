/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaetani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:24:46 by ggaetani          #+#    #+#             */
/*   Updated: 2026/01/16 15:24:48 by ggaetani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*The functions uses a attention function named "att"
 that is incremented when the haystack cell fit's with needle
 first cell, if this condition still true for the entire needle len
  the index cell index is calculed and returned*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
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
