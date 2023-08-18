#include "main.h"

/**
 * print_triangle - Entry point
 *
 * Description - function prints 0-14, 10times
 * @size: 1 and only param
 *
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
int s = size;
if (s <= 0)
{
_putchar('\n');
}
else
{
int row;
for (row = 0; row < s; row++)
{
int space, hash;
for (space = s - row - 1; space > 0; space--)
{
_putchar(' ');
}
for (hash = 0; hash <= row; hash++)
{
_putchar('#');
}
_putchar(10);
}
}
}
