#include <unistd.h>

void repeat (char c)
{
	char *alphabet = "abcdefghijklmnopqrstuvwxyz";
	char *ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;
	int j;

	while (alphabet[i] != '\0' && ALPHABET[i] != '\0')
	{
		if(c == alphabet[i] || c == ALPHABET[i])
		{
			j = 0;
			while (j <= i)
			{
				write (1, &c, 1);
				j++;
			}
			return;
		}
		i++;
	}
	write (1, &c, 1);
}

int main(int argc, char *argv[])
{
	int i = 0;
	if (argc != 2)
			write (1, "\n", 1);
	else
	{
		while (argv[1][i] != '\0')
		{
			repeat(argv[1][i]);
			i++;
		}
		write (1, "\n", 1);
	}
	return(0);
}
