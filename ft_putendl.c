
#include <stdio.h>
#include <unistd.h>

/*
Description     Outputs the string s to the standard output followed by a
                ’\n’.

Param. #1       The string to output.

Return value     None.
*/
void ft_putendl(char const *s)
{
	size_t  i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
    write(1, "\n", 1);
}
/*
int main(void)
{
	ft_putendl("Hello World");
	return (0);
}
*/