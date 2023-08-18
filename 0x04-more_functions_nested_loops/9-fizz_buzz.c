#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - function prints 0-14, 10times
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("Fizzbuzz ");
}
else if (i % 3 == 0)
{
putchar('F');
putchar('i');
putchar('z');
putchar('z');
putchar(' ');
}
else if (i % 5 == 0)
{
putchar('B');
putchar('u');
putchar('z');
putchar('z');
putchar(' ');
}
else
{
if (i >= 10)
{
putchar('0' + i / 10);
putchar('0' + i % 10);
putchar(' ');
}
else
{
putchar('0' + i);
putchar(' ');
}
}
}
printf("\n");
return (0);
}
