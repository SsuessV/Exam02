#include <unistd.h>

void find_alpha (char c)
{
	int i = 0;
	char *alpha = "abcdefghijklmnopqrstuvwxyz";
	char *ALPHA = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while (alpha[i] != '\0' && ALPHA[i] != '\0')
	{
		if (c == alpha[i])
			write(1, &alpha[25-i], 1);
		if (c == ALPHA[i])
			write (1, &ALPHA[25-i], 1);
		i++;
	}
	if (!(('a' <= c && c <= 'z')||('A' <= c && c <= 'Z')))
		write (1, &c, 1);
}

int main(int argc, char *argv[])
{
	int i=0;
	if (argc != 2)
		write (1, "\n", 1);
	else
	{
		while(argv[1][i] != '\0')
		{
			find_alpha(argv[1][i]);
			i++;
		}
		write (1, "\n", 1);
	}
}
