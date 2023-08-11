#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: "the program prints lowercase a-z, followed by A_Z"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char letter;
char capita;
letter = 'a';
capita = 'A';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
while (capita <= 'Z')
{
putchar(capita);
capita++;
}
putchar(10);
return (0);
}
