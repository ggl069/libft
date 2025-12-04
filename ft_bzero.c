/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaetani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 19:53:56 by ggaetani          #+#    #+#             */
/*   Updated: 2025/11/26 19:53:57 by ggaetani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		tmp[i] = '\0';
		i++;
	}
}

/*
int main(void)
{
    printf("-ft_bzero-\n");

    char str[] = "mi chiamo max";

    printf("%s\n", str);
    bzero(str, 2);
    printf("%s\n", str);

    printf("-bzero-\n");

    char str1[] = "mi chiamo max";

    printf("%s\n", str1);
    bzero(str1, 2);
    printf("%s\n", str1);
}
*/
