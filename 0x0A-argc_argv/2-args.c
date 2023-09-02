#include <stdio.h>

/**
 * main - Entry point of the program.
 * @argc: first argument
 * @argv: second argument
 *
 * Description:
 *   This program prints all it
 * parameters followed by a new line
 *
 * Return:
 *   Always returns 0 to indicate successful execution.
 */

int main(int argc, char *argv[])
{
    int i;
    i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
