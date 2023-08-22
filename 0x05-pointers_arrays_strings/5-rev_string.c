#include "main.h"

/**
 * rev_string - Prints a reversed string followed by a new line to stdout.
 * @s: pointer to the input string.
 *
 * Description - This function prints the reversed characters of the
 * string to the standard output, followed by a new line
 *
 * Return: None.
 */

void rev_string(char *s)
{
char *start = s;
char *end = s;


while (*end != '\0')
{
end++;
}
end--;

while (start < end)
{
char temp = *start;
*start =  *end;
*end = temp;

start++;
end--;
}
}
