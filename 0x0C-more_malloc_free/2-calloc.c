#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>


/**
 * _calloc - entry
 * @nmemb: number of elements in array
 * @size: size in byte of each member of the array
 *
 * Description: the function creates a memory space for
 * an array of nmemb elements and size byte size each
 *
 * Return: Nothing
 *
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int *ptr;
unsigned int i;
i = 0;
size_t total_size;
total_size = nmemb * size;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(total_size);

if (ptr == NULL)
return (NULL);

memset(ptr, 0, total_size);

return (ptr);
}
