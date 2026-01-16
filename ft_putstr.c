/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaetani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:06:37 by ggaetani          #+#    #+#             */
/*   Updated: 2026/01/16 16:06:39 by ggaetani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/*
Description     Outputs the string s to the standard output.

Param. #1       The string to output.

Return value    None.
*/
void	ft_putstr(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}
/*
int main(void)
{
	ft_putstr("Hello World");
	return (0);
}
*/
