#include "main.h"

/**
 * print_rev - Prints a reversed string followed by a new line to stdout.
 * @s: pointer to the input string.
 *
 * Description - This function prints the reversed characters of the
 * string to the standard output, followed by a new line
 *
 * Return: None.
 */

void print_rev(char *s)
{
int length = 0;
int i;

while (*s != '\0')
{
length++;
s++;
}

i = length - 1;
while (i >= 0)
{
_putchar(s[i]);
i--;
}
_putchar(10);
}
