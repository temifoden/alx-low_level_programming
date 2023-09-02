#include <stdio.h>
#include <stdlib.h>

/**
 * minCoins - Calculate the minimum number of coins needed to make change.
 *
 * @cents: The amount in cents for which change needs to be made.
 *
 * Return: The minimum number of coins required.
 */
int minCoins(int cents)
{
int coins[] = {25, 10, 5, 2, 1};
int numCoins;
int i;
numCoins = 0;

if (cents < 0)
{
return (0);
}

for (i = 0; i < 5; i++)
{
while (cents >= coins[i])
{
cents -= coins[i];
numCoins++;
}
}

return (numCoins);
}

int main(int argc, char *argv[])
{
int result;
int cents;
if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);

if (cents < 0)
{
printf("0\n");
return (0);
}

result = minCoins(cents);

printf("%d\n", result);

return (0);
}
