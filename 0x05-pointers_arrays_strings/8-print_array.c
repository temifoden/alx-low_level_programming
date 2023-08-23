#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an integer array, followed by a new line.
 * @a: Pointer to the integer array.
 * @n: Number of elements to print.
 *
 * This function takes a pointer to an integer array and the number of elements
 * to print as parameters. It prints the elements of the array separated by a
 * comma and space, followed by a new line.
 *
 * Return: None.
 */

void print_array(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        
        if (i != n - 1){
            printf(", ");
        }
    }
    printf("\n");
}
