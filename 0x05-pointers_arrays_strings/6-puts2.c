#include "main.h"

/**
 * puts2 - Prints a string followed by a new line to stdout.
 * @str: pointer to the input string.
 *
 * Description - This function prints the characters of the
 * string to the standard output, followed by a new line
 *
 * Return: None.
 */

void puts2(char *str)
{
int i;
i = 0;

while (str[i] != '\0')
{
if (str[i + 1] == '\0')
{
_putchar(str[i]);
break;
}
else
{
_putchar(str[i]);
}
i += 2;
}
_putchar(10);
}
