/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaetani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:49:21 by ggaetani          #+#    #+#             */
/*   Updated: 2026/01/16 15:49:26 by ggaetani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

/*
Allocates (with malloc(3)) and returns a “fresh” memory
area. The memory allocated is initialized to 0. If the alloca-
tion fails, the function returns NULL.
*/
void	*ft_memalloc(size_t size)
{
	char	*arr;

	arr = malloc(size);
	if (!arr)
	{
		return (NULL);
	}
	ft_bzero(arr, size);
	return (arr);
}
/*
int	main(void)
char	str[] = "hello world";
{

	printf("return: %p", ft_memalloc(12));
	return (0);
}
*/
