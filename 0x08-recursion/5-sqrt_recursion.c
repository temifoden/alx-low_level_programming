#include "main.h"

/**
 * _sqrt_recursion_helper - Helper function to calculate the natural square root recursively.
 *
 * @n: The input number.
 * @start: The start of the range for the search.
 * @end: The end of the range for the search.
 *
 * Return: The natural square root of the number, or -1 if no natural square root exists.
 */

int _sqrt_recursion_helper(int n, int start, int end)
{
if (start > end)
{
return (-1);
}

int mid = (start + end) / 2;
int square = mid * mid;

if (square == n)
{
return (mid);
}
else if (square < n)
{
return (_sqrt_recursion_helper(n, mid + 1, end));
}
else
{
return (_sqrt_recursion_helper(n, start, mid - 1));
}
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number recursively.
 *
 * @n: The input number.
 *
 * Return: The natural square root of the number, or -1 if no natural square root exists.
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (_sqrt_recursion_helper(n, 0, n));
}
