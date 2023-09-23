#include <stdio.h>

void print_before_main(void) __attribute__((constructor));

/**
 * print_before_main - prints the message before main is executed
 *
 * Return: Nothing
*/

void print_before_main(void)
{
printf("You're beat! and yet, you mustallow,\n"
"I bore my house upon my back!\n");
}
