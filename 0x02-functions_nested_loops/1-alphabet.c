#include <stdio.h>
#include "main.h"

/**
 * Description - function that prints a-z
 * Return - success (0)
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
