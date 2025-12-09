/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaetani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:31:32 by ggaetani          #+#    #+#             */
/*   Updated: 2025/12/09 16:31:34 by ggaetani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Header 42

/*
DESCRIPTION
The strchr() function locates the first occurrence of c (converted to a
char) in the string pointed to by s.  The terminating null character is
considered part of the string; therefore if c is ‘\0’, the functions
locate the terminating ‘\0’.

The strrchr() function is identical to strchr() except it locates the
last occurrence of c.

The strchrnul() function is identical to strchr() except that if c is not
found in s a pointer to the terminating ‘\0’ is returned.

RETURN VALUES
The functions strchr() and strrchr() return a pointer to the located
character, or NULL if the character does not appear in the string.

strchrnul() returns a pointer to the terminating ‘\0’ if the character
does not appear in the string.
*/

#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*str;
	int			i;

	i = 0;
	str = (char *)s;
	while (s[i] != '\0' || s[i] == '\0')
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char str[] = "\0ciao";
	char chr = 'a';

	printf("ptr: %p\n", ft_strchr(str, chr));
}
*/
