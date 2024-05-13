#include <unistd.h>

void write_alpha (char c, int i)
{
	while (i > 0)
	{
		write (1, &c, 1);
		i--;
	}
}

void repeat_alpha (char *str)
{
	while (*str != '\0')
	{
		if('a' <= *str && *str <= 'z')
			write_alpha (*str, *str + 1 - 'a');
		else if ('A' <= *str && *str <= 'Z')
			write_alpha (*str, *str + 1 - 'A');
		else
			write (1, str, 1);
		str++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write (1, "\n", 1);
	return (0);
}
