#include "main.h"
#include <stdio.h>

/**
 * set_bit - set the bit in a particular index
 * @n: pointer to the value we wish to manipulate
 * @index: position to set
 *
 * Return: 1 if successful  and -1 if fail
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;
if (index >= sizeof(unsigned long int) * 8 || n == NULL)
return (-1);


mask = 1UL << index;

*n = *n | mask;

return (1);
}
