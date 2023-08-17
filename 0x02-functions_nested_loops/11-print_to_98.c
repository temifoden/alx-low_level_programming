#include "main.h"

/**
 * print_to_98 - entry
 *
 * Description - prints numbers to 98
 * @n: this is the value that got passed and print from
 *
 * Return: Always 0 (Success)
 */



void print_to_98(int n)

/**
 * print_number - this function takes number and check it weight
 * @j: param
 *
 */

int n = n;
void print_number(int j)
{
int i = j;
if (i < 10)
{
_putchar ('0' + i);
if (i != 98)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
}
}
else if (i >= 10 && i < 100)
{
_putchar('0' + i / 10);
_putchar('0' + i % 10);
if (i != 98)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
else
{
_putchar('0' + i / 100);
i %= 100;
_putchar('0' + (i / 10));
_putchar('0' + (i % 10));
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}

/**
 * handle_all - this too
 * @k: it param
 */

void handle_all(int k);
{
int i = k;
if (i < 0)
{
_putchar('-');
i = -i;
print_number(i);
}
else
{
print_number(i);
}
}


{
if (n <= 98)
{
for (i = n; i <= 98; i++)
{

handle_all(i);
}
}
else
{

for (i = n; i >= 98; i--)
{
handle_all(i);
}
}
}
