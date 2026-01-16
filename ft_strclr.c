/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaetani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:29:54 by ggaetani          #+#    #+#             */
/*   Updated: 2026/01/16 15:30:00 by ggaetani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 42 header

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/*
Description:	Sets every character of the string to the value ’\0’.

Param. #1:		The string that needs to be cleared.

Return value:	None.
*/
void	ft_strclr(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		s[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char str[] = "HelloWorld";

	printf("str: %s\n", str);
	ft_strclr(str);
	printf("str: %s\n", str);
	return (0);
}
*/
