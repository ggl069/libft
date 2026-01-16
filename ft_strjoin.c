/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaetani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:27:12 by ggaetani          #+#    #+#             */
/*   Updated: 2026/01/16 15:27:13 by ggaetani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 42 header

#include <stdlib.h>
#include "libft.h"

/*
Description     Allocates (with malloc(3)) and returns a “fresh” string end-
                ing with ’\0’, result of the concatenation of s1 and s2. If
                the allocation fails the function returns NULL.

Param. #1       The prefix string.
Param. #2       The suffix string.

Return value    The “fresh” string result of the concatenation of the 2 strings.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char *str1 = "";
	char *str2 = "Hello world";

	printf("final string: %s\n", ft_strjoin(str1, str2));
	return (0);
}
*/
