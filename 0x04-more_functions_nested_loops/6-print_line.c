#include "main.h"

/**
 * print_line - Entry point
 *
 * Description - function prints 0-14, 10times
 * @n: 1 and only param
 *
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
if (n <= 0)
{
_putchar(10);
}
else
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar(10);
}
}
