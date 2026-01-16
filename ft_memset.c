/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaetani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 15:18:33 by ggaetani          #+#    #+#             */
/*   Updated: 2025/11/26 15:18:38 by ggaetani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/*The memset() function fills the first n bytes of
 the memory area pointed to by s with the constant byte c.*/
void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*tmp;

	tmp = (char *)s;
	i = 0;
	while (i < n)
	{
		tmp[i] = c;
		i++;
	}
	return (s);
}
/*
int main(void)
{
	char	str[] = "ciao";

	printf("%s\n", str);
	ft_memset(str, 'X', 4);
	printf("%s\n", str);

	printf("normal memset\n");
	char	str1[] = "ciao";

	printf("1--%s\n", str1);
	memset(str1, 'X', 4);
	printf("1--%s\n", str1);

}
*/
