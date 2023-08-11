#include <unistd.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: "Prints a specific text to the standard error."
 *
 * Return: Always 1 (unsuccessful)
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
