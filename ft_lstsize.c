/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaetani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 19:43:25 by ggaetani          #+#    #+#             */
/*   Updated: 2026/01/22 19:43:27 by ggaetani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/*
Counts the number of nodes in the list.

lst: The beginning of the list.

Return: The length of the list
*/
int	ft_lstsize(t_list *lst)
{
	int		cnt;

	if (!lst)
		return (0);
	cnt = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		cnt++;
	}
	return (cnt);
}
