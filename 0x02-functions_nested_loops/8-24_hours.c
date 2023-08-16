#include "main.h"

/**
 * jack_bauer - entry
 *
 * Description - prints every minute of the day
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
int h;
int m;
for (h = 0; h < 24; h++)
{
for (m = 0; m < 60; m++)
{
_putchar('0' + h / 10);
_putchar('0' + h % 10);
_putchar(':');
_putchar('0' + m / 10);
_putchar('0' + m % 10);
_putchar(10);
}
}
}
