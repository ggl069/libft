/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaetani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:23:40 by ggaetani          #+#    #+#             */
/*   Updated: 2026/01/16 15:23:48 by ggaetani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_calloc(1, 1));
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	while (s[start + i] != '\0' && i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
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
