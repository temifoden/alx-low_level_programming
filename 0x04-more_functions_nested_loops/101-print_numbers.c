#include "main.h"

/**
 * print_number - entry
 *
 * Description - code
 * @n: parameter
 *
 * Return: Always (0) success
 */

void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}

int divisor = 1;
while (n / divisor >= 10)
{
divisor *= 10;
}

while (divisor > 0)
{
int digit = n / divisor;
_putchar('0' + digit);
n %= divisor;
divisor /= 10;
}
}
