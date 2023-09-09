#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - function entry
 * @b: number of memory space needed
 *
 * Description: function checks if the memory allocation fails
 * and returns a status code of 98
 *
 * Return: the address to the pointer
*/

void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);

if (ptr == NULL)
exit(98);

return (ptr);
}
