#include "main.h"

/**
 * memset - prints an integer.
 * @s: The input value.
 * @b: the character
 * @n: number
 *
 * Return: Nothing
*/

char *_memset(char *s, char b, unsigned int n)
{
char *pointer;
unsigned int i;
pointer = s;
for (i = 0; i < n; i++)
{
*s = b;
s++;
}

return (pointer);
}
