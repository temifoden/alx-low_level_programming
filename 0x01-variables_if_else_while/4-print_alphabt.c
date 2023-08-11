#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: "the program prints lowercase a-z, excluding e and q"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char letter;
letter = 'a';
while (letter <= 'z')
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
letter++;
}
putchar(10);
return (0);
}
