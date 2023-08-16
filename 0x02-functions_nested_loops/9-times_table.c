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
for (x = 0; x < 9; x++)
{
for (y = 0; y < 9; y++)
{
int out;
out = x * y;
if (out >= 10)
{
_putchar('0' + out / 10);
_putchar('0' + out % 10);
}
else
{
_putchar('0' + out);
}
if (y != 8)
{
_putchar(',');
_putchar(' ');
}
}
_putchar(10);
}
}
