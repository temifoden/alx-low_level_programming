#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description - function that prints a-z
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
int first_letter;
int x;
x=0;
while (x < 10)
{
for (first_letter = 'a'; first_letter <= 'z'; first_letter++)
{
putchar(first_letter);
}
putchar('\n');
x++;
}
}
