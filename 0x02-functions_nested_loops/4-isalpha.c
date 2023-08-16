#include "main.h"

/**
 * _isalpha - entry
 *
 * Description - function that prints a-z
 *
 * @c: int c is the integer
 *
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
