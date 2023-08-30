#include "main.h"

/**
 * is_palindrome_recursive - Recursive helper function to check if a
 * string is a palindrome.
 *
 * @s: The input string.
 * @start: The starting index for comparison.
 * @end: The ending index for comparison.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome_recursive(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
if (s[start] != s[end])
{
return (0);
}

return (is_palindrome_recursive(s, start + 1, end - 1));
}


/**
 * _strlen_recursion - Calculates the length of a string recursively.
 *
 * @s: The input string.
 *
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}

return (1 + _strlen_recursion(s + 1));
}


/**
 * is_palindrome - Checks if a string is a palindrome.
 *
 * @s: The input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
int length;
length = _strlen_recursion(s);
return (is_palindrome_recursive(s, 0, length - 1));
}
