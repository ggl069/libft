/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaetani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:56:41 by ggaetani          #+#    #+#             */
/*   Updated: 2026/01/16 15:56:44 by ggaetani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/*
Description Outputs the character c to the standard output.

Param. #1   The character to output.

Return      value None.
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int main(void)
{
	ft_putchar('a');
	return (0);
}
*/
