#include <unistd.h>

void printnum (int n)
{
	char digit[] = "0123456789";
	if (n > 9)
		printnum (n/10);
	write (1, &digit[n%10], 1);
}


void	fizzbuzz (void)
{
	int n = 1;
	while (n <= 100)
	{
		if (n % 15 == 0)
			write (1, "fizzbuzz", 8);
		else if (n % 3 == 0)
			write (1, "fizz", 4);
		else if (n % 5 == 0)
			write (1, "buzz", 4);
		else
			printnum(n);
		n++;
		write (1, "\n", 1);
	}
}

int main(void)
{
	fizzbuzz ();
	return (0);
}
