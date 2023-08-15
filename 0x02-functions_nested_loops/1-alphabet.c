#include <stdio.h>
#include "main.h"

/**
 * main - write function that print a-z
 *
 * Return: Always 0.
 */

void print_alphabet(){
int first_letter;
for (first_letter = 'a'; first_letter <= 'z'; first_letter++)
{
putchar(first_letter);
}
}

int main ()
{
print_alphabet();
putchar(10);
return (0);
}
