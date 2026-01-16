/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaetani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:28:47 by ggaetani          #+#    #+#             */
/*   Updated: 2026/01/16 15:31:49 by ggaetani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 42 header

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/*
Description:	Takes as a parameter the address of a string that need to be
freed with free(3), then sets its pointer to NULL.

Param. #1	The string’s address that needs to be freed and its pointer set
to NULL.

Return value	None.
*/
void	ft_strdel(char **as)
{
	if (as)
	{
		free(*as);
		*as = NULL;
	}
}
