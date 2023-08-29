#include "main.h"

/**
 * _strspn - program entry
 * @s: string to check through
 * @accept: the set of characters to check in s
 * 
 * Description: the prigram returns the number of occurence of
 * characters of "accept" in "s".
 * 
 * Return: count
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int count;
int i, j;

count = 0;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
count++;
break;
}
}
if (accept[j] == '\0')
{
break;
}
}
return count;
}
