#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - entry
 * @s1: string to add to
 * @s2: string we are cutting from
 * @n: number of characters to copy from s2
 *
 * description: copies an n number of characters from s2 to s1
 *
 * Return: the pointer to S1
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *mem;
unsigned int len1, len2, i, j;
i = 0, j = 0, len1 = 0, len2 = 0;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";
while (s1[len1])
len1++;
while (s2[len2])
len2++;
if (n >= len2)
n = len2;

mem = malloc((len1 + n + 1) * sizeof(*mem));

if (mem == NULL)
return (NULL);

while (s1[i])
{
mem[i] = s1[i];
i++;
}
while (j < n)
mem[i++] = s2[j++];
if (n < len2)
mem[i] = '\0';

return (mem);
}
