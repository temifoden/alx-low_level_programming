#include "main.h"
#include <stddef.h>
#include <stdlib.h>


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

void *_calloc(unsigned int nmemb, unsigned int size){
    unsigned int *ptr;

    if (nmemb == 0 || size == 0)
        return (NULL);

    ptr = calloc(nmemb, size);

    if (ptr == NULL)
        return (NULL);

    return (ptr);
}
