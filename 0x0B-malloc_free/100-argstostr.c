#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * argstostr - Concatenates all program arguments into a single string.
 * @ac: The argument count.
 * @av: An array of argument strings.
 *
 * Return: A pointer to the concatenated string or NULL on failure.
 */

char *argstostr(int ac, char **av)
{
char *result;
int i, j, pos;
int len, total_len;

len = 0;
total_len = len;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{

for (j = 0; av[i][j]; j++)
len++;

}

total_len += len + ac;

result = (char *)malloc((total_len + 1) * sizeof(char));

if (result == NULL)
return (NULL);

pos = 0;
for (i = 0; i < ac; i++)
{

for (j = 0; av[i][j]; j++)
result[pos++] = av[i][j];

result[pos++] = '\n';
}

result[pos] = '\0';

return (result);
}
