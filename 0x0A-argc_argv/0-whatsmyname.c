#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description:
 *   This program prints its name, including the path, without having to
 *   recompile it when you change its name. It uses the command-line arguments
 *   provided to determine its name.
 *
 * Return:
 *   Always returns 0 to indicate successful execution.
 */

int main(int argc, char *argv[])
{
if (argc > 0)
{
printf("%s\n", argv[0]);
}
return (0);
}
