#include "function_pointers.h"


/**
 * print_name- function entry
 * @name: first parameter
 * @f: pointer to a function
*/

void print_name(char *name, void (*f)(char *))
{
(*f)(name);
}
