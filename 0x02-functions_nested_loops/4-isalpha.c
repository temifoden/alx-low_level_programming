#include "main.h"

/**
 * _islower - entry
 *
 * Description - function that prints a-z
 *
 * @c: int c is the integer
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
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
