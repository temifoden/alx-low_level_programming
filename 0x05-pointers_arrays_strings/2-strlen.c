#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: pointer to the input string.
 *
 * Description - This function takes a pointer to a null-terminator
 * string as a parameter and calculates the length of the string.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return length;
}
