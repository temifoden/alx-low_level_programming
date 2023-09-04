#include "main.h"
#include <stdlib.h>
#include <stddef.h>


/**
 * create_array - Creates an array of characters and
 * initializes it with a specific character.
 *
 * @size: The size of the array to create.
 * @c: The character used for initialization.
 *
 * Return: A pointer to the allocated array, or NULL
 * if size is 0 or if memory allocation fails.
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;
if (size == 0)
{
return (NULL);
}

arr = (char *)malloc(sizeof(char) * size);
if (arr == (NULL))
{
return (NULL);
}

for (i = 0; i < size; i++)
{
arr[i] = c;
}

return (arr);

}
