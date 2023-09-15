#include "variadic_functions.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function entry
 * @separator: first member
 * @n: second member
 *
 * Return: Nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list my_list;
va_start(my_list, n);

if (n > 0)
{
for (i = 0; i < n; i++)
{
printf("%s", va_arg(my_list, char *));
if (separator != NULL && i != (n - 1))
printf("%s", separator);
}
}
printf("\n");
va_end(my_list);
}
