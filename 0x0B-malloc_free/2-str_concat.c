#include "main.h"
#include <stdlib.h>
#include <stddef.h>


/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated concatenated string, or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
char *allocation;
unsigned int i, j, len1, len2;
len1 = 0;
len2 = 0;

if (s1 == NULL)
{
return ("");
}
if (s2 == NULL)
{
return ("");
}

while (s1[len1])
len1++;

while (s2[len2])
len2++;

allocation = (char *)malloc((len1 + len2 + 1) * sizeof(char));

if (allocation == NULL)
{
return (NULL);
}

for (i = 0; i < len1; i++)
{
allocation[i] = s1[i];
}
for (j = 0; j < len2; j++)
{
allocation[i + j] = s2[j];
}
    
allocation[i + j] = '\0';

return (allocation);
}
