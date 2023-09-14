#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name- function entry
 * @name: first parameter
 * @f: pointer to a function
 *
 * Description - function that calls a function through it function
 * pointer and pass an argument
 *
 * Return: Nothing
*/

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
