#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - entry
 * @n: the number of elements
 *
 * Return: 0 on failure and result value on success
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int result;
va_list numbers;
va_start(numbers, n);

result = 0;
if (n == 0)
{
return (0);
}
for (i = 0; i < n; i++)
{
result += va_arg(numbers, int);
}
va_end(numbers);
return (result);
}
