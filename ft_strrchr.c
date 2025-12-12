/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaetani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 17:26:30 by ggaetani          #+#    #+#             */
/*   Updated: 2025/12/09 17:26:32 by ggaetani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*The  strchr() function returns a pointer to the first occurrence of the
       character c in the string s.

       The strrchr() function returns a pointer to the last occurrence of  the
       character c in the string s.

       The strchrnul() function is like strchr() except that if c is not found
       in s, then it returns a pointer to the null  byte  at  the  end  of  s,
       rather than NULL.

       Here "character" means "byte"; these functions do not work with wide or
       multibyte characters.

RETURN VALUE
       The strchr() and strrchr() functions return a pointer  to  the  matched
       character  or NULL if the character is not found.  The terminating null
       byte is considered part of the string, so that if  c  is  specified  as
       '\0', these functions return a pointer to the terminator.

       The strchrnul() function returns a pointer to the matched character, or
       a pointer to the null byte at the end of s (i.e., s+strlen(s))  if  the
       character is not found.
*/

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;
	int			i;

	i = ft_strlen(s);
	str = (char *)s;
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char str[] = "cio";
	char chr = 'a';

	printf("ptr: %p\n", ft_strrchr(str, chr));
}
*/