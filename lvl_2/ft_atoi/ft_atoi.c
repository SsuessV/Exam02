#include <stdlib.h>
#include <stdio.h>

int ft_atoi (const char *str)
{
	int sign = 1;
	int result = 0;
	while ((9 <= *str && *str <= 13) || *str == 32)
			str++;
	if (*str == '-' || *str == '+')
	{
		if(*str == '-')
				sign *= -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (result * sign);
}
