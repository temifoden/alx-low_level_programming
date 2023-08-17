#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Description - function that prints a-z
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
int first_letter;
int x;
x = 0;
while (x < 10)
{

for (first_letter = 0; first_letter < 15; first_letter++)
{
if (first_letter > 10)
{
_putchar('0' + first_letter / 10);
_putchar('0' + first_letter % 10);
}
else
{
_putchar('0' + first_letter);
}
}
_putchar('\n');
x++;
}
}
