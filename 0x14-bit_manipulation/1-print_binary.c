#include "main.h"
#include <stdio.h>

/**
 * print_binary - convert an unsigned integer to binary
 * @n: integer number to convert
 *
 * Return: Nothing
*/

void print_binary(unsigned long int n)
{
if (n > 1)
{
print_binary(n >> 1);
}
putchar((n & 1) ? '1' : '0');
}
