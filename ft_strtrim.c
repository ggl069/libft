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

static int	skip(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	len;
	char	*str;
	size_t	j;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] && skip(s[i]))
		i++;
	len = ft_strlen(s);
	while (len > i && skip(s[len - 1]))
		len--;
	str = (char *)malloc(sizeof(char) * (len - i + 1));
	if (!str)
		return (NULL);
	j = 0;
	while (i < len)
		str[j++] = s[i++];
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
