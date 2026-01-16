/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaetani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:27:24 by ggaetani          #+#    #+#             */
/*   Updated: 2026/01/16 15:27:26 by ggaetani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
Description:	Applies the function f to each character of the string passed
				as argument, and passing its index as first argument. Each
				character is passed by address to f to be modified if necessary.

Param. #1:		The string to iterate.
Param. #2:		The function to apply to each character of s and its index.

Return value:	None.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, (char *)&s[i]);
		i++;
	}
}

/*
void    test(unsigned int i, char *c)
{
	if (i % 2 == 0)
	{
		if (*c >= 'a' && *c <= 'z')
			*c = *c - 32;
	}
	else
	{
		if (*c >= 'A' && *c <= 'Z')
			*c = *c + 32;
	}
}

int main(void)
{
	char str[] = "Hello World";

	printf("Prima: %s\n", str);

	ft_striteri(str, test);

	printf("Dopo : %s\n", str);

	return (0);
}
*/
