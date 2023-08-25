#include "main.h"
#include <stdbool.h>

/**
 * is_seperator - checks if a character is a word seperator.
 * @c: the character to check.
 * 
 * Return: true if c is a seperator and false if otherwise.
*/

bool is_separator(char c)
{
int i;
char separators[] = " \t\n,;.!?\"(){}";

for (i = 0; separators[i] != '\0'; i++)
{
if (c == separators[i])
{
return (true);
}
}
return (false);
}

/**
 * cap_string - converts lowercase to upper.
 * @s: the input string.
 *
 * Return: A pointer to the modified string
 */

char *cap_string(char *s)
{
bool new_word = true;
char *ptr = s;

while (*ptr)
{
if (new_word && *ptr >= 'a' && *ptr <= 'z')
{
*ptr = *ptr - 'a' + 'A';
new_word = false;
}
else if (is_separator(*ptr))
{
new_word = true;
}
else
{
new_word = false;
}
ptr++;
}
return (s);
}
