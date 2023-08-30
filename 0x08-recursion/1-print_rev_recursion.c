#include "main.h"

/**
 * _print_rev_recursion - function recursively print strings
 * @s: the string to print
 *
 * Return: Nothing
*/

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
