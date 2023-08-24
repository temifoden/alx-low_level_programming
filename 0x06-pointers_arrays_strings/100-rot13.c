#include "main.h"

/**
 * rot13 - Encides a string using the ROT13 cipher.
 * @s: The input string to encode.
 * 
 * Return: A pointer to the encoded string.
*/

char *rot13(char *s)
{
    char *result = s;
    int i;
    char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
    
    while (*s)
    {
        for (i = 0; i < 52; i++)
        {
            if (*s == input[i])
            {
                *s = output[i];
                break;
            }
        }
        s++;
    }

    return (result);
}
