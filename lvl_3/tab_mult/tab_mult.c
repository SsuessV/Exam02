#include <unistd.h>

int ft_atoi (char *str)
{
	int result = 0;
	while (*str)
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (result);
}

void	ft_putnbr(int num)
{
	char	digit;

	while (num > 9)
	{
		ft_putnbr(num / 10);
		num = num % 10;
	}
	digit = num + '0';
	write (1, &digit, 1);
}

int main(int argc, char **argv)
{
	int i = 1;
	int	num = 0;

	if (argc != 2)
		write (1, "\n", 1);
	else
	{
		num = ft_atoi(argv[1]);
		while (i < 10)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(num);
			write(1, " = ", 3);
			ft_putnbr(i * num);
			write (1, "\n", 1);
			i++;
		}
		return (0);
	}
}
