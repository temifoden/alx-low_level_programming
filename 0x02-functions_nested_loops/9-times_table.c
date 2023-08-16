#include <stdio.h>
#include "main.h"

/**
 * times_table - entry
 *
 * Description - prints 9 times table, starting with 0
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
int x, y;
for (x = 0; x < 10; x++)
{
for (y = 0; y < 10; y++)
{
int out;
out = x * y;
if (out >= 10)
{
if (y != 0)
{
_putchar(',');
_putchar(' ');
}
_putchar('0' + out / 10);
_putchar('0' + out % 10);
}
else
{
if (y != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar('0' + out);
}
}
_putchar(10);
}
}
