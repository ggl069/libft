/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaetani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:23:22 by ggaetani          #+#    #+#             */
/*   Updated: 2026/01/16 15:23:26 by ggaetani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
Description     Allocates (with malloc(3)) and returns a copy of the string
				given as argument without whitespaces at the beginning or at
				the end of the string. Will be considered as whitespaces the
				following characters ’ ’, ’\n’ and ’\t’. If s has no whites-
				paces at the beginning or at the end, the function returns a
				copy of s. If the allocation fails the function returns NULL.

Param. #1       The string to be trimed.

Return value    The “fresh” trimmed string or a copy of s.
*/

static int	skip(char c, char const *set)
{
	size_t	i;
	int		bool;

	i = 0;
	bool = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
		{
			bool = 1;
			break ;
		}
		i++;
	}
	return (bool);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*str;
	size_t	j;

	if (!s1)
		return (NULL);
	i = 0;
	while (s1[i] && skip(s1[i], set))
		i++;
	len = ft_strlen(s1);
	while (len > i && skip(s1[len - 1], set))
		len--;
	str = (char *)malloc(sizeof(char) * (len - i + 1));
	if (!str)
		return (NULL);
	j = 0;
	while (i < len)
		str[j++] = s1[i++];
	str[j] = '\0';
	return (str);
}
/*
int	main(void)
{
	char *str = "    hgh.   jnj  ";

	printf("tmp: %s", ft_strtrim(str));
	return (0);
}
*/
