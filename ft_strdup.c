/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaetani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:28:10 by ggaetani          #+#    #+#             */
/*   Updated: 2026/01/16 15:28:15 by ggaetani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//42 header

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

/*
The strdup() function allocates sufficient memory for a copy of the
string s1, does the copy, and returns a pointer to it.  The pointer may
subsequently be used as an argument to the function free(3).

If insufficient memory is available, NULL is returned and errno is set to
ENOMEM.
*/
char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*arr;

	len = ft_strlen(s1);
	arr = malloc(sizeof(char) * (len + 1));
	if (!arr)
		return (NULL);
	ft_memcpy(arr, s1, len);
	return (arr);
}

/*
int	main(void)
{
	const char	*original = "Ciao, sono una stringa allocata con malloc!";
	char		*copy;
	char		*empty_copy;

	printf("=== TEST ft_strdup ===\n\n");

	//TEST 1: Stringa normale
	printf("Test 1: Stringa normale\n");
	printf("Originale: '%s' (Indirizzo: %p)\n", original, original);

	copy = ft_strdup(original);
	if (!copy)
	{
		printf("Errore: ft_strdup ha ritornato NULL\n");
		return (1);
	}
	printf("Copia:     '%s' (Indirizzo: %p)\n", copy, copy);

	// Verifica contenuto
	if (strcmp(original, copy) == 0)
		printf("-> Contenuto: OK ✅\n");
	else
		printf("-> Contenuto: KO ❌\n");

	// Verifica indirizzi (devono essere diversi)
	if (original != copy)
		printf("-> Memoria:   OK ✅ (Nuova allocazione)\n");
	else
		printf("-> Memoria:   KO ❌ (Stesso puntatore!)\n");

	free(copy); // Importante: liberare la memoria!
	printf("\n----------------\n\n");


	// TEST 2: Stringa vuota
	printf("Test 2: Stringa vuota \"\"\n");
	empty_copy = ft_strdup("");
	if (!empty_copy)
	{
		printf("Errore: ft_strdup ha ritornato NULL su stringa vuota\n");
		return (1);
	}
	printf("Copia: '%s'\n", empty_copy);

	if (strcmp("", empty_copy) == 0)
		printf("-> Contenuto: OK ✅\n");
	else
		printf("-> Contenuto: KO ❌\n");

	free(empty_copy);

	return (0);
}
*/
