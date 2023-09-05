#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>

/**
 * is_space - Checks if a character is a space.
 * @c: The character to check.
 *
 * Return: true if 'c' is a space, false otherwise.
 */

bool is_space(char c)
{
return (c == ' ');
}


/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
int count;
count = 0;
bool in_word;
in_word = false;

while(*str)
{
if (is_space(*str))
{
if (in_word)
in_word = false;
}
else if (!in_word)
{
in_word = true;
count++;
}
str++;
}
return (count);
}



/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return:A pointer to an array of strings (words), or NULL on failure.
 */

char **strtow(char *str)
{
int num_words;
char **words;
int i;

if (str == NULL || *str == '\0')
return (NULL);

num_words = count_words(str);

if (num_words == 0)
return (NULL);

words = (char **)malloc((num_words + 1) * sizeof(char *));

if (words == NULL)
return (NULL);

i = 0;
while(*str)
{
if (!is_space(*str))
{
int word_len;
word_len = 0;

while (*str && !is_space(*str))
{
word_len++;
str++;
}

words[i] = (char *)malloc((word_len + 1) * sizeof(char));

if (words[i] == NULL)
{
int j;
for (j = 0; j < i; j++)
free(words[j]);
                
free(words);
return (NULL);
}
str -= word_len;
int k;

for (k = 0; k < word_len; k++)
words[i][k] = *str++;

words[i][word_len] = '\0';
i++;
}
else
{
str++;
}
}
words[i] = NULL;
return (words);
}
