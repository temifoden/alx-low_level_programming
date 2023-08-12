#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: "the program prints lowercase z-a"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char letter;
letter = 'z';
while (letter >= 'a')
{
putchar(letter);
letter--;
}
putchar(10);
return (0);
}
