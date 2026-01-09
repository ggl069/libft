/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaetani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:32:27 by ggaetani          #+#    #+#             */
/*   Updated: 2025/11/27 17:32:29 by ggaetani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

/*
man:
The  memcpy()  function  copies  n bytes from memory area src to memory
area dest.  The memory areas must not overlap.  Use memmove(3)  if  the
memory areas do overlap.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*arr;
	unsigned char	*source;

	arr = (unsigned char *)dest;
	source = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		arr[i] = source[i];
		i++;
	}
	return (dest);
}

/*
int main(void)
{
	//gemini
	// 1. TEST CON STRINGHE
	printf("\n=== TEST 1: Stringhe ===\n");
	char src_str[] = "Ciao Mondo!";
	char dest_str[20];

	// Pulisco il buffer per sicurezza
	memset(dest_str, 0, 20);

	ft_memcpy(dest_str, src_str,
	strlen(src_str) + 1); // +1 per copiare anche il \0
	printf("Source:      %s\n", src_str);
	printf("Destination: %s\n", dest_str);

	if (strcmp(src_str, dest_str) == 0)
		printf("Result:      \033[0;32mOK\033[0m\n"); // Verde
	else
		printf("Result:      \033[0;31mKO\033[0m\n"); // Rosso

	// 2. TEST CON INTERI (Importante per verificare la copia byte per byte)
	printf("\n=== TEST 2: Array di Interi ===\n");
	int src_int[] = {42, 100, 999};
	int dest_int[3];

	ft_memcpy(dest_int, src_int, sizeof(src_int));
	// sizeof copia tutti i byte dell'array

	printf("Source:      {%d, %d, %d}\n", src_int[0], src_int[1], src_int[2]);
	printf("Destination: {%d, %d, %d}\n", dest_int[0], dest_int[1], dest_int[2]);

	if (dest_int[1] == 100)
		printf("Result:      \033[0;32mOK\033[0m\n");
	else
		printf("Result:      \033[0;31mKO\033[0m\n");

	// 3. TEST VALORE DI RITORNO
	printf("\n=== TEST 3: Valore di Ritorno ===\n");
	char buffer[10];
	void *ret_val = ft_memcpy(buffer, "Test", 5);

	if (ret_val == buffer)
		printf("Puntatore ritornato correttamente: \033[0;32mSI\033[0m\n");
	else
		printf("Puntatore ritornato correttamente:
		 \033[0;31mNO\033[0m (Atteso: %p, Ricevuto: %p)\n", buffer, ret_val);

	// 4. TEST CONFRONTO CON MEMCPY ORIGINALE
	printf("\n=== TEST 4: ft_memcpy vs memcpy ===\n");
	char real_buff[50];
	char ft_buff[50];
	char *test_txt = "Test di confronto con la libreria standard";

	memcpy(real_buff, test_txt, strlen(test_txt) + 1);
	ft_memcpy(ft_buff, test_txt, strlen(test_txt) + 1);

	if (memcmp(real_buff, ft_buff, strlen(test_txt) + 1) == 0)
		printf("Confronto vs stdlib: \033[0;32mPERFETTO\033[0m\n");
	else
		printf("Confronto vs stdlib: \033[0;31mDIVERSO\033[0m\n");

	return (0);
}
*/
