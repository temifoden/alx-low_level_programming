#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _memcpy - Function entry
 * @dest: the destination to copy into.
 * @src: where to copy from
 * @n: size characters to copy from src.
 *
 * Return: original_dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *original_dest = dest;

while (n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
return (original_dest);
}



/**
 * _realloc- function entry
 * @ptr: pointer pointing to the content we wish to copy
 * @old_size: the size of memory we wish to modify
 * @new_size: size of memory we are modifying into
 *
 * Description: this function modifies the size of ealier gotten memory
 *
 * Return: Nothing
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int cpy_size;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
return (malloc(new_size));

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

new_ptr = malloc(new_size);

cpy_size = (old_size < new_size) ? old_size : new_size;

_memcpy(new_ptr, ptr, cpy_size);

free(ptr);

return (new_ptr);
}
