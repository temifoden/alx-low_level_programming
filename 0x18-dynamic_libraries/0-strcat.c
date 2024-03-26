#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting concatenated string.
 */

char *_strcat(char *dest, char *src)
{
char *original_dest = dest;

while (*dest != '\0')
{
dest++;
}


while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

return (original_dest);
}
