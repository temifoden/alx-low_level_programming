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
printf("%d ", n);

if (n == 0){
printf("is zero\n");
}else if(n > 0){
printf("is positive\n");
} else{
printf("is negative\n");
}
return(0);
}
