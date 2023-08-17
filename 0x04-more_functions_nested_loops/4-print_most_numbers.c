#include "main.h"

/**
 * print_most_numbers - entry
 *
 * Description - print 0-9
 *
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i != 2 && i != 4)
{
_putchar('0' + i);
}
}
_putchar(10);
}
