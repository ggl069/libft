/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaetani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:39:55 by ggaetani          #+#    #+#             */
/*   Updated: 2026/01/16 15:39:58 by ggaetani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The malloc(), calloc(), valloc(), realloc(), and reallocf() functions
allocate memory.  The allocated memory is aligned such that it can be
used for any data type, including AltiVec- and SSE-related types.

The calloc() function contiguously allocates enough space for count
objects that are size bytes of memory each and returns a pointer to the
allocated memory.  The allocated memory is filled with bytes of value
zero.
*/
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;

	if (count != 0 && size != 0 && count > (size_t)-1 / size)
		return (NULL);
	arr = malloc(count * size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, (count * size));
	return (arr);
}
