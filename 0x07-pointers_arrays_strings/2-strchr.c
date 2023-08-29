#include "main.h"
#include <stddef.h>


/**
 * _strchr - Entry; starting point
 * @s: string to check
 * @c: character to check in the s string
 *
 * Description - the function checks for an occurence of a
 * character in a set of string and return from first occurence
 *
 * Return: return the pointer to first occurence
 * or NULL if not found
*/

char *_strchr(char *s, char c)
{

while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (NULL);
}
