#include "main.h"

/**
 * reverse_array - Reverse elements of an array.
 * @a: array to reverse.
 * @n: number of element present in array.
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
    int i;
    int temp;

    for (i = 0; i < (n / 2); i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}
