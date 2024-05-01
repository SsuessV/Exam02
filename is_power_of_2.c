#include <unistd.h>
#include <stdio.h>

int	is_power_of_2 (unsigned int n)
{
	while (n / 2)
	{
		n /= 2;
		if (n % 2 == 0)
			return (1);
		else
			return (0);
	}
	return 0;
}

int main (void)
{
	int n = 16;
	int result = is_power_of_2(n);
	printf("%d\n", result);
	return (0);
}
