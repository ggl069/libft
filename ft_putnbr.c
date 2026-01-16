
#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

/*
Description     Outputs the integer n to the standard output.
Param. #1       The integer to output.
Return value    None.
*/
void ft_putnbr(int n)
{
    if (n == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }
    if (n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
    if (n > 9)
    {
        ft_putnbr(n / 10);
    }
    ft_putchar((n % 10) + '0');
}

int main(void)
{
	ft_putnbr('5');
	return (0);
}