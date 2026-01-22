/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaetani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 19:47:03 by ggaetani          #+#    #+#             */
/*   Updated: 2026/01/22 19:47:12 by ggaetani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include "libft.h"

/*
Adds the node ’new’ at the beginning of the list.
14

lst: The address of a pointer to the first node of a list.
new: The address of a pointer to the node to be added

return: None
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	*node;
	t_list	*new_node;

	node = ft_lstnew("ccccc");
	new_node = ft_lstnew("AAAA");

	ft_lstadd_front(&node, new_node);


	printf("%s\n", (char *)node->content);
	printf("%s\n", (char *)node->next->content);
}
*/
