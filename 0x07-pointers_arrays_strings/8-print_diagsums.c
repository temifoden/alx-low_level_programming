#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of diagonals in a square matrix
 * @a: Pointer to the 2D square matrix
 * @size: Size of the matrix (number of rows/columns)
 *
 * Description: The function calculates and prints the sum of the main diagonal
 * and the secondary diagonal in the square matrix 'a'.
 */

void print_diagsums(int *a, int size)
{
int sum_diag1;
int sum_diag2;
int i;

sum_diag1 = 0;
sum_diag2 = 0;

for (i = 0; i < size; i++)
{
sum_diag1 += a[i * size + i];
sum_diag2 += a[i * size + (size - 1 - i)];
}
printf("%d, %d\n", sum_diag1, sum_diag2);
}
