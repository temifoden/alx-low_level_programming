#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the input string.
 *
 * This function takes a pointer to a string and converts it to an integer.
 * It takes into account leading + and - signs. If no valid integer is found
 * in the string, the function returns 0.
 *
 * Return: The converted integer.
 */

int _atoi(char *s)
{
int result;
result = 0;
int sign;
sign = 1;
int i;
i = 0;

if (s[i] == '-')
{
sign = -1;
i++;
}
else if (s[i] == '+')
{
i++;
}


while (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
i++;
}

return (result *sign);
}
