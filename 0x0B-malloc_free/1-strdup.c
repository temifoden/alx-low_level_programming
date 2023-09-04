#include "main.h"
#include <stddef.h>
#include <stdlib.h>


/**
 * _strdup - Duplicates a string in memory.
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the newly allocated duplicated
 * string, or NULL if str is NULL or if insufficient memory
 * was available.
 */

char *_strdup(char *str)
{
char *duplicate;
unsigned int length, i;
length = 0;

if (str == NULL)
{
return (NULL);
}

while (str[length])
{
length++;
}
duplicate = (char *)malloc((length + 1) * sizeof(char));

if (duplicate == NULL)
{
return (NULL);
}

for (i = 0; i < length; i++)
{
duplicate[i] = str[i];
}
duplicate[length] = '\0';

return (duplicate);
}
