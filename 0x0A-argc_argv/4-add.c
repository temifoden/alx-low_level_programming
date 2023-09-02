#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_number - Check if a string represents a positive number.
 *
 * @str: The string to check.
 *
 * Return: 1 if the string contains only digits (positive number), 0 otherwise.
 */

int is_positive_number(char *str)
{
while (*str)
{
if (*str < '0' || *str > '9')
{
return (0);
}
str++;
}
return (1);
}

/**
 * main - Entry point of the program.
 *
 * Description:
 *   This program adds positive numbers provided as command-line arguments and
 *   prints the result. If no numbers are passed, it prints 0. If any argument
 *   contains symbols that are not digits or if any number is negative, it
 *   prints "Error" and returns 1.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return:
 *   0 if the program executes successfully, 1 if there is an error.
 */
int main(int argc, char *argv[])
{
int sum;
int num;
int i;
sum = 0;

if (argc == 1)
{
printf("0\n");
return 0;
}

for (i = 1; i < argc; i++)
{
if (!is_positive_number(argv[i]))
{
printf("Error\n");
return (1);
}

num = atoi(argv[i]);
if (num < 0)
{
printf("Error\n");
return (1);
}

sum += num;
}

printf("%d\n", sum);

return (0);
}
