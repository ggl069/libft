/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaetani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 18:23:47 by ggaetani          #+#    #+#             */
/*   Updated: 2026/01/20 18:23:52 by ggaetani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	*ft_free_tab(char **tab, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static int	ft_word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	**ft_fill_tab(char **tab, char const *s, char c)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	start = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			start = i;
			while (s[i] != '\0' && s[i] != c)
				i++;
			tab[j] = ft_substr(s, start, i - start);
			if (tab[j] == NULL)
				return ((char **)ft_free_tab(tab, j));
			j++;
		}
	}
	tab[j] = NULL;
	return (tab);
}

/*
Description		Allocates (with malloc(3)) and returns an array of “fresh”
				strings (all ending with ’\0’, including the array itself) ob-
				tained by spliting s using the character c as a delimiter.
				If the allocation fails the function returns NULL. Example
				: ft_split("*hello*fellow***students*", ’*’) re-
				turns the array ["hello", "fellow", "students"].

Param. #1		The string to split.
Param. #2		The delimiter character.

Return value	The array of “fresh” strings result of the split.
*/
char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!tab)
		return (NULL);
	return (ft_fill_tab(tab, s, c));
}

int main(void)
{
	ft_split("*hello*fellow***students*", '*');
}

