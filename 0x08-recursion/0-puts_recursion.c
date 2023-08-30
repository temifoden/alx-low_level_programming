#include "main.h"

/**
 * _puts_recursion - function recursively print strings
 * @s: the string to print
 *
 * Return: Nothing
*/

void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
s++;
_puts_recursion(s);
}
else
{
_putchar(10);
return;
}
}
