#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description:
 *   This program prints the number of arguments passed into it, excluding the
 *   program name itself. It uses the 'argc' (argument count) variable to
 *   determine the number of additional command-line arguments.
 *
 * Return:
 *   Always returns 0 to indicate successful execution.
 */

int main(int argc, char *argv[])
{
printf("%d\n", argc - 1);
return 0;
}
