/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaetani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:26:23 by ggaetani          #+#    #+#             */
/*   Updated: 2026/01/16 15:26:25 by ggaetani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Header 42

/*
DESCRIPTION
The strcmp() and strncmp() functions lexicographically compare the null-
terminated strings s1 and s2.

The strncmp() function compares not more than n characters.  Because
strncmp() is designed for comparing strings rather than binary data,
characters that appear after a ‘\0’ character are not compared.

RETURN VALUES
The strcmp() and strncmp() functions return an integer greater than,
equal to, or less than 0, according as the string s1 is greater than,
equal to, or less than the string s2.  The comparison is done using
unsigned characters, so that ‘\200’ is greater than ‘\0’.
*/

/*
>0	--> s1 > s2
0	--> s1 == s2
<0	--> s1 < s2
*/

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main(void)
{
	char str1[] = "Hello";
	char str2[] = "HelloWorld";

	printf("result: %d\n", ft_strncmp(str1, str2, 6));
}
*/
