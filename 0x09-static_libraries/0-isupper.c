#include "main.h"

/**
 * _isupper - entry
 *
 * Description - function that prints a-z
 *
 * @c: int c is the integer
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
