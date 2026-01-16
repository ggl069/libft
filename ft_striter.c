/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaetani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:27:38 by ggaetani          #+#    #+#             */
/*   Updated: 2026/01/16 15:27:40 by ggaetani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 42 header

#include <stdlib.h>
#include "libft.h"

/*
Description:    Applies the function f to each character of the string passed
as argument. Each character is passed by address to f to be
modified if necessary.

Param. #1:  The string to iterate.
Param. #2:  The function to apply to each character of s.

Return value:   None.
*/
void	ft_striter(char *s, void (*f)(char *))
{
	size_t	i;

	if (!s || !f)
		return;
	i = 0;
	while (s[i] != '\0')
	{
		f(&s[i]);
		i++;
	}
}

/*
// test function
void    to_uppercase(char *c)
{
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 32;
}

int	main(void)
{
	char	str[] = "Hello World";

	//printf("str: %s\n", str);
	ft_striter(str, to_uppercase);

	printf("str %s", str);
}
*/
