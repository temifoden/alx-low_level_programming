#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: number of required string from source
 *
 * Return: A pointer to the resulting concatenated string.
 */

char *_strncat(char *dest, char *src, int n)
{
char *original_dest = dest;
int i;
i = 0;

while (*dest != '\0')
{
dest++;
}

while (*src != '\0')
{
if (i < n)
{
*dest = *src;
dest++;
src++;
i++;
}
else
{
break;
}
}

return (original_dest);
}
