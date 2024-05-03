#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	operation (int	num1, int num2, char op)
{
	if (op == '+')
			return num1 + num2;
	else if (op == '-')
			return num1 - num2;
	else if (op == '*')
			return num1 * num2;
	else if (op == '%')
			return (num1 % num2);
	else if (op == '/')
			return (num1 / num2);
	else
			return (0);
		}

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
			write(1, "\n", 1);
			return (0);
	}
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char op = argv[2][0];
	int result = operation (num1, num2, op);
	printf("%d\n", result);
	return (0);
		}
