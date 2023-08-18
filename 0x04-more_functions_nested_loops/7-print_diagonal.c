#include "main.h"

/**
 * print_diagonal - Entry point
 *
 * Description - function prints 0-14, 10times
 * @n: 1 and only param
 *
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
if (n < 0)
{
_putchar('\n');
}
else
{
int row;
int col;
for (row = 0; row < n; row++)
{
for (col = 0; col < row; col++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
