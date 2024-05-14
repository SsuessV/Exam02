#include <unistd.h>

char	put_nbr(unsigned int argc)
{
	if (argc > 9)
			return (put_nbr (argc / 10));
	return (argc % 10 + '0');
}

int main (int argc, char *argv[])
{
	if (argc == 1)
			write (1, "0", 1);
	else
	{
		char num = put_nbr (argc - 1);
		write (1, &num, 1);
	}
	write (1, "\n", 1);
	return (0);
}
