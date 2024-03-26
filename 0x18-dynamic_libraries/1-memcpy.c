#include "main.h"

/**
 * _memcpy - Function entry
 * @dest: the destination to copy into.
 * @src: where to copy from
 * @n: size characters to copy from src.
 *
 * Return: original_dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *original_dest = dest;

while (n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
return (original_dest);
}
