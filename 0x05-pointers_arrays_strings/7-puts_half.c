#include "main.h"

/**
 * puts_half - Prints half of string followed by a new line to stdout.
 * @str: pointer to the input string.
 *
 * Description - This function prints half the characters of the
 * string to the standard output, followed by a new line
 *
 * Return: None.
 */

void puts_half(char *str)
{
int length;
length = 0;
int start;


while (str[length] != '\0')
{
length++;
}


start = length / 2;
while (start <= length)
{
_putchar(str[start]);
start++;
}

_putchar(10);
}
