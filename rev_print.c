#include <unistd.h>

int main (int argc, char *argv[])
{
    int i = 0;
    if(argc == 2)
    {
        while (argv[1][i] != '\0')
                i++; //i includes the null terminator
        while (i > 0) //if the condition is i >= 0 it will enter the while loop 1 more time
					  //and then print smth more?
        {
                i--; //to exclude the null terminator
                write (1, &argv[1][i], 1);
        }
        write (1, "\n", 1);
    }
    else
        write (1, "\n", 1);
}

