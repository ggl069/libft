/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaetani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:14:02 by ggaetani          #+#    #+#             */
/*   Updated: 2026/01/16 16:14:03 by ggaetani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
Description:	Applies the function f to each character of the string given
				as argument to create a “fresh” new string (with malloc(3))
				resulting from the successive applications of f.

Param. #1:		The string to map.
Param. #2: 		The function to apply to each character of s.

Return value: 	The “fresh” string created from the successive applications off.
*/

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
//	test function
char upper(char c) {
    return c >= 'a' && c <= 'z' ? c - 32 : c;
}

int	main(void)
{
    const char *str = "hello world";
    char *result = ft_strmap(str, upper);

    if (result != NULL) {
        printf("Original string: %s\n", str);
        printf("Mapped string: %s\n", result);

        free(result);
    } else {
        printf("ft_strmap failed.\n");
    }
    return 0;
}
*/
