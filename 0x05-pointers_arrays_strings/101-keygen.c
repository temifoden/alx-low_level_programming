#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 6

/**
 * main - Generates a random valid password for the program 101-crackme.
 *
 * This program generates a random password that consists of valid characters
 * for the program 101-crackme. It uses the rand() function to generate random
 * numbers and seeds the random number generator using the current time. The
 * generated password is printed to the console.
 *
 * Return: Always 0 (success).
 */

int main(void)
{
char validChars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
int validCharsCount = sizeof(validChars) - 1;

char password[PASSWORD_LENGTH + 1];

int i;
srand(time(NULL));


printf("Generating valid password for 101-crackme...\n");

for (i = 0; i < PASSWORD_LENGTH; i++)
{
int randomIndex = rand() % validCharsCount;
password[i] = validChars[randomIndex];
}

password[PASSWORD_LENGTH] = '\0';

printf("Generated password: %s\n", password);

return 0;
}
