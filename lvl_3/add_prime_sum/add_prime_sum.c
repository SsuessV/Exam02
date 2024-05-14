#include <unistd.h>

int ft_atoi (char *str)
{
	int result = 0;
	while (*str)
	{
		result *= 10;
		result += *str - '0';
	}
	return (result);
}

int main (int argc, char *argv[])
{
	ft_atoi (argv[1])
}
