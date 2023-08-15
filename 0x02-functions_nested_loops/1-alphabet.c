#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description - function that prints a-z
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
int first_letter;
for (first_letter = 'a'; first_letter <= 'z'; first_letter++)
{
putchar(first_letter);
}
putchar(10);
}
