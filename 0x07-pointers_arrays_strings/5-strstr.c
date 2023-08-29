#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locate a substring in a string
 * @haystack: Pointer to the null-terminated string to search in
 * @needle: Pointer to the null-terminated substring to search for
 *
 * Description: The _strstr() function finds the first occurrence of the
 * substring needle in the string haystack. The terminating null bytes (\0)
 * are not compared.
 *
 * Return: If the substring is found, returns a pointer to the beginning
 * of the located substring; otherwise, returns NULL.
 */

char *_strstr(char *haystack, char *needle)
{
    while (*haystack != '\0')
    {
        char *h = haystack;
        char *n = needle;

        while (*n != '\0' && *h == *n)
        {
            h++;
            n++;
        }

        if (*n == '\0')
        {
            return (haystack);
        }
        haystack++;
    }
    return (NULL);
}
