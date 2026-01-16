/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaetani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:55:50 by ggaetani          #+#    #+#             */
/*   Updated: 2026/01/16 15:55:53 by ggaetani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*
Description     Outputs the char c to the file descriptor fd.

Param. #1       The character to output.
Param. #2       The file descriptor.

Return value    None.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
