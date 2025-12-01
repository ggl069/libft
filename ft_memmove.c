/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaetani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 17:13:29 by ggaetani          #+#    #+#             */
/*   Updated: 2025/11/28 17:13:31 by ggaetani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

/*The  memmove()  function  copies n bytes from memory area src to memory
area dest.
The memory areas may overlap: copying takes place as though
the  bytes in src are first copied into a temporary array that does not
overlap src or dest, and the bytes are then copied from  the  temporary
array to dest.
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	if (!d || !s)
		return (0);
		if (d < s)
		{
			while (i != n)
			{
				d[i] = s[i];
				i++;
			}
		}
		else
		{
			while (n > 0)
			{
				n--;
				d[n] = s[n];
			}
		}
	return (dest);
}
/*
int main(void)
{
	char str[5] = "ciao";
	char str1[6];

	ft_memmove(str1, str, 5);
	//return (0);
}
*/
