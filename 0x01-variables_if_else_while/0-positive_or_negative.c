#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: "the program checks if the output of a
 * random generated value is positive or negative"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
 
if (n == 0){
  printf("%d is zero\n", n);
}else if(n > 0){
  printf("%d is positive\n", n);
} else{
  printf("%d is negative\n", n);
}
return(0);
}
