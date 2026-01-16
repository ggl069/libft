/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaetani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:25:55 by ggaetani          #+#    #+#             */
/*   Updated: 2026/01/16 15:25:57 by ggaetani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 42 header

#include <stdlib.h>
#include "libft.h"

/*
Description		Lexicographical comparison
				between s1 and s2 up to n char-
				acters or until a ’\0’ is reach
				ed. If the 2 strings are identical,
				the function returns 1, or 0 otherwise.

Param. #1		The first string to be compared.
Param. #2		The second string to be compared.
Param. #3		The maximum number of characters to be compared.

Return value	1 or 0 according to if the 2
				strings are identical or not.
*/
int	ft_strnequ(char const *s1, char const *s2,	size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2)
	{
		if (!s1 && !s2)
			return (1);
		else
			return (0);
	}
	while ((s1[i] == s2[i]) && s1[i] != '\0' && i < n)
	{
		i++;
	}
	if ((s1[i] - s2[i] != 0) && (i < n))
		return (0);
	return (1);
}
