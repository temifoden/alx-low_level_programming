#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator- function entry
 * @array: pointer to the array
 * @size: size of the array to choose from
 * @action:pointer to function
 *
 * Return: Nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
