#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: pointer to the first integer.
 * @b: pinter to the second integer.
 *
 * Description - This function takes two  pointers as  parameters
 * and swaps the values of the integers they point to
 *
 * Return: None
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
