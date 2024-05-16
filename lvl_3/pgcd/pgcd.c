#include <stdio.h>
#include <stdlib.h>

int com_divisor (unsigned int i, unsigned int j)
{
	int smaller = (i < j) ? i : j ;
	int divisor = 2;
	while (divisor <= smaller)
	{
		if (i % divisor == 0 && j % divisor == 0)
			printf("%d\n", divisor);
		divisor++;
	}
	return (0);
}

int main (int argc, char *argv[])
{
	if (argc != 3)
		printf("\n");
	else
	{
		int argv1 = atoi(argv[1]);
		int argv2 = atoi(argv[2]);
		com_divisor(argv1, argv2);
	}

}
