#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 *
 * Description:
 *   This program multiplies two integer numbers provided as command-line
 *   arguments and prints the result. If it does not receive exactly two
 *   arguments, it prints an error message and returns 1.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return:
 *   0 if the program executes successfully, 1 if there is an error.
 */

int main(int argc, char *argv[])
{
int num1;
int num2;
int result;
if (argc != 3)
{
printf("Error\n");
return (1);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 + num2;

printf("%d\n", result);
return (0);
}
