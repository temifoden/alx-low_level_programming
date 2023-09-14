#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name- function entry
 * @name: first parameter
 * @f: pointer to a function
 *
 * Return: Nothing
*/

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
