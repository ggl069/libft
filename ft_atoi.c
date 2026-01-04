// header 42

/*
DESCRIPTION
	The atoi function converts the initial portion of the string to an integer.
	It skips leading white-space characters and then processes an optional sign.
	It converts the following digits into a numerical value until it reaches a non-digit character.
RETURN VALUE
	This function returns an integral number,
	represents int value.
	If the input string is not a valid string's number, it returns 0.
*/

#include <stdio.h>
#include "libft.h"

/* a ** b */
static int	ft_pow(int a, int b)
{
	int	res;
	
	res = 1;
	while (b > 0)
	{
		res = res * a;
		b--;
	}
	return (res);
}

int	ft_atoi(const char *str)
{
	int i;

	i = 0;
	while (str[i] < '0' || str[i] > '9')
	{
		i++;
	}

}

int main(void)
{
	char	csum[] = "-43 gattini";

	printf("res: %d\n", ft_atoi(csum));
	return (0);
}