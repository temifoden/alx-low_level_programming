#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: pointer to the input string.
 *
 * Description - This function prints the characters of the
 * string to the standard output, followed by a new line
 *
 * Return: None.
 */

int _puts(char *str)
{
while(*str != '\0')
{
_putchar(*str);
str++;
}
_putchar(10);
}
