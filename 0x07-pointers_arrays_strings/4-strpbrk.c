#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - program entry
 * @s: string to check through
 * @accept: the set of characters to check in s
 *
 * Description: the prigram returns the string
 * in "s" starting from wherever the first match
 * of "accept"
 *
 * Return: string
*/

char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *a = accept;
while (*a != '\0')
{
if (*s == *a)
{
return (s);
}
a++;
}
s++;
}
return (NULL);
}
