#include "main.h"

/**
 * memcpy - Function entry
 * @dest: the destination to copy into.
 * @src: where to copy from
 * @n: size characters to copy from src.
 *
 * Return: original_dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *original_dest = dest;
unsigned int j;

for (j = 0; j < n && *src != '\0'; j++)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (original_dest);
}
