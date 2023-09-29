#include "main.h"

/**
 * flip_bits - counts the number of bits needed to be flipped to turn n to m
 * @n: first value
 * @m: second value
 *
 * Return: count
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result;
int count;

count = 0;
xor_result = n ^ m;
while (xor_result > 0)
{
count += xor_result & 1;
xor_result >>= 1;
}

return (count);
}
