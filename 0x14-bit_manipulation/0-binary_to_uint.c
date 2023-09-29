#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - function converts binary to unsigned integer
 * @b: pointer to the binary literal
 *
 * Return: integer value
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int result;
int i;

result = 0;
i = 0;

if (b == NULL)
return (0);

while (b[i] != '\0')
{
if (b[i] != '0' && b[i] != '1')
return (0);

result = result * 2 + (b[i] - '0');
i++;
}

return (result);
}
