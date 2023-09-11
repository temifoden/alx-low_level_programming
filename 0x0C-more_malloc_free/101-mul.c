#include <stdio.h>
#include <stdlib.h>

/**
 * isPositiveInteger - code entry
 * @str: parameter to check
 *
 * Return: 1 on success and 0 if failed
*/

int isPositiveInteger(char *str)
{
int i;
if (str == NULL || str[0] == '\0')
return (0);

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] < '0' || str[i] > '9')
return (0);
}

return (1);
}

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
unsigned long num1;
unsigned long num2;
unsigned long result;
char *num1_str;
char *num2_str;

if (argc != 3)
{
printf("Error\n");
exit(98);
}

num1_str = (argv[1]);
num2_str = (argv[2]);

if (!isPositiveInteger(num1_str) || !isPositiveInteger(num2_str))
{
printf("Error\n");
exit(98);
}

num1 = strtoul(num1_str, NULL, 10);
num2 = strtoul(num2_str, NULL, 10);

result = num1 *num2;

printf("%lu\n", result);
return (0);
}
