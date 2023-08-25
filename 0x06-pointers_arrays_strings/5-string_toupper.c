#include "main.h"

/**
 * string_toupper - converts lowercase to upper.
 * @s: the input string.
 *
 * Return: A pointer to the modified string
 */

char *string_toupper(char *s)
{
char *ptr;
ptr = s;

while (*ptr)
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr = *ptr - 'a' + 'A';
}
ptr++;
}
return s;
}
