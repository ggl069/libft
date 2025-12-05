/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaetani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 18:17:56 by ggaetani          #+#    #+#             */
/*   Updated: 2025/12/05 18:17:58 by ggaetani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int ft_toupper(int c)
{
    unsigned char   letter;

    letter = (unsigned char)c;
    if (!ft_islower(letter))//!c || (c < 97 && c > 122)
        return (letter);
    letter = c - 32;
    return (letter);
}

int main(void)
{
    char letter = 'b';
    
    printf("Lowercase: %c\n", letter);
    letter = ft_toupper(letter);
    printf("Uppercase: %c\n", letter);
    return (0);
}

correggere condizioni