#include "main.h"

/**
 * print_last_digit - entry
 *
 * Description - function that prints a-z
 *
 * @n: int x is the integer
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
int last_digit = n % 10;
int positive_val;
positive_val = (last_digit < 0) ? -last_digit : last_digit;
_putchar('0' + positive_val);
return (positive_val);
}
