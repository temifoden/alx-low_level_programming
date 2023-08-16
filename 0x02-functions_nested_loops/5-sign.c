#include "main.h"

/**
 * print_sign - entry
 *
 * Description - function that prints a-z
 *
 * @n: int c is the integer
 *
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{

if (n > 0)
{
putchar('+');
return (1);
}

else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('-');
return (-1);
}

return (0);
}
}
