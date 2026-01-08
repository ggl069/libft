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

int	ft_atoi(const char *str)
{
	int i;
	int	num;
	int	sign;

	sign = 1;
	num = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sign);
}

/*
int main(void)
{
	char	csum[] = " -43gattini";

	printf("res: %d\n", ft_atoi(csum));
	return (0);
}
*/