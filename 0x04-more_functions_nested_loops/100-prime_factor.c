#include <stdio.h>
#include <math.h>

/**
 * main - entry
 *
 * Description - code
 *
 * Return: Always (0) success
 */

int main(void)
{
unsigned long int number = 612852475143;
unsigned long int largest_prime_factor = 2;
unsigned long int i;

while (number % 2 == 0)
{
number /= 2;
}
for (i = 3; i <= sqrt(number); i += 2)
{
while (number % i == 0)
{
largest_prime_factor = i;
number /= i;
}
}
if (number > 2)
{
largest_prime_factor = number;
}

printf("%lu\n", largest_prime_factor);

return (0);
}
