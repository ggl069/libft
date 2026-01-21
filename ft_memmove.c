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
	s = (unsigned char *)src;
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
		return (dest);
	}
	while (n > 0)
	{
		n--;
		d[n] = s[n];
	}
	return (dest);
}

/*
void print_test(char *title, char *data, size_t len)
{
    printf("--- %s ---\n", title);
    printf("Risultato: %s\n\n", data);
}

int main(void)
{
    // Caso 1: Nessuna sovrapposizione
    char src1[] = "Hello World";
    char dest1[20];
    ft_memmove(dest1, src1, 12);
    print_test("Test 1: Semplice Copia", dest1, 12);

    // Caso 2: Overlap (Dest > Src)
    // Partiamo da: "ABCDE"
    // Vogliamo spostare "ABC" in avanti di due posizioni: "ABABC"
    char buffer2[] = "ABCDE";
    printf("Buffer prima (Overlap D > S): %s\n", buffer2);
    ft_memmove(buffer2 + 2, buffer2, 3);
    print_test("Test 2: Overlap (Dest > Src)", buffer2, 5);

    // Caso 3: Overlap (Dest < Src)
    // Partiamo da: "ABCDE"
    // Vogliamo spostare "CDE" all'inizio: "CDE DE" (o meglio "CDEDE")
    char buffer3[] = "ABCDE";
    printf("Buffer prima (Overlap D < S): %s\n", buffer3);
    ft_memmove(buffer3, buffer3 + 2, 3);
    print_test("Test 3: Overlap (Dest < Src)", buffer3, 5);

    return (0);
}
*/
