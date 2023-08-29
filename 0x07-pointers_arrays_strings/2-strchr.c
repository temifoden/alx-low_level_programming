#include "main.h"



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
int i;
for (i = 0; *s != '\0'; i++)
{
if (*s == c)
{
return (s);
}
s++;
}
return (NULL);
}
