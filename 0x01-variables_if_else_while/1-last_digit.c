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
int lastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;

printf("Last digit of %d is %d", n, lastDigit);

if (lastDigit > 5)
{
puts(" and is greater than 5");
}
else if (lastDigit == 0){
puts(" and is 0");
}
else
{
puts(" and is less than 6 and not 0");
}
return(0);
}
