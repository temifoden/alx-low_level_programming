#include "main.h"

/**
 * fizz_buzz - Entry point
 *
 * Description - function prints 0-14, 10times
 *
 * Return: Always 0 (Success)
 */

void fizz_buzz(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
_putchar('F');
_putchar('i');
_putchar('z');
_putchar('z');
_putchar('B');
_putchar('u');
_putchar('z');
_putchar('z');
_putchar(' ');
}
else if (i % 3 == 0)
{
_putchar('F');
_putchar('i');
_putchar('z');
_putchar(' ');
}
else if (i % 5 == 0)
{
_putchar('B');
_putchar('u');
_putchar('z');
_putchar('z');
_putchar(' ');
}
else
{
if (i >= 10)
{
_putchar('0' + i / 10);
_putchar('0' + i % 10);
_putchar(' ');
}
else
{
_putchar('0' + i);
_putchar(' ');
}
}
}
printf("\n");
}
