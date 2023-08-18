#include "main.h"

/**
 * print_square - Entry point
 *
 * Description - function prints 0-14, 10times
 * @size: 1 and only param
 *
 * Return: Always 0 (Success)
 */

void print_square(int size)
{
if (size < 0)
{
_putchar('\n');
}
else
{
int row;
int col;
for (row = 0; row < size; row++)
{
for (col = 0; col < size; col++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
