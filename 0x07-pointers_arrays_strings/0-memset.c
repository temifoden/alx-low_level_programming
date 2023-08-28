#include "main.h"

/**
 * memset - Function entry
 * @s: the start of the buffer
 * @b: value to fill with
 * @n: size of the buffer
 *
 * Return: the content of the buffer
*/

char *_memset(char *s, char b, unsigned int n)
{
char *pointer = s;
int i;

for (i = 0; i < n; i++)
{
*s = b;
s++;
}
return (pointer);
}
