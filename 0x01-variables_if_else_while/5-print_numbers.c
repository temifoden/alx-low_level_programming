#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: "the program prints  0-9"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int num;
num = 0;
while (num < 10)
{
printf("%d", num);
num++;
}
printf("\n");
return (0);
}
