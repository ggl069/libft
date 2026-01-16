// 42 header

#include <unistd.h>
#include "libft.h"

/*
Description Outputs the character c to the standard output.

Param. #1   The character to output.

Return      value None.
*/
void ft_putchar(char c)
{
    write(1, &c, 1);
}
/*
int main(void)
{
    ft_putchar('a');
    return (0);
}
*/