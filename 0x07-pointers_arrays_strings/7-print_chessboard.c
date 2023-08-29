#include "main.h"

/**
 * print_chessboard - Prints a chessboard pattern
 * @a: Pointer to a 2D array representing the chessboard
 *
 * Description: The function prints the characters stored in the 2D array 'a'
 * row by row, creating a chessboard pattern.
 */

void print_chessboard(char (*a)[8]){
int i;
int j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar(10);
}
}
