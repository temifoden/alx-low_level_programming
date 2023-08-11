#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: "the program gets last digit of a of a
 * randomly generated value is positive or negative number
 * and check if greater or less than 5, or exactly 0"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int lastDigit;
lastDigit = n % 10;

printf("Last digit of %d is %d\n", n, lastDigit);

if (lastDigit > 5)
{
printf("greater than 5\n");
}
else if (lastDigit == 0){
printf("0\n", n);
}
else
{
printf("less than 6 and not 0\n", n);
}
return(0);
}
