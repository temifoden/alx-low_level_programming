#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strlen - Returns the length of a string
 * @str: Pointer to a string
 *
 * Return: Length of the string
 */
size_t _strlen(const char *str)
{
size_t len = 0;
while (str[len] != '\0')
len++;

return (len);
}

/**
 * my_strdup - Duplicates a string
 * @src: Pointer to the source string
 *
 * Return: Pointer to a new duplicate string, or NULL if it fails
 */
char *my_strdup(const char *src)
{
size_t len;
size_t i;
char *new_str;

len = _strlen(src) + 1;
new_str = malloc(len);

if (new_str == NULL)
return (NULL);

for (i = 0; i < len; i++)
new_str[i] = src[i];


return (new_str);
}

/**
 * new_dog - function entry
 * @name: first member
 * @age: second parameter
 * @owner: third parameter
 *
 * Return: Nothing
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *the_dog;

the_dog = malloc(sizeof(dog_t));

if (the_dog == NULL)
return (NULL);

the_dog->name = my_strdup(name);
the_dog->owner = my_strdup(owner);

if (the_dog->name == NULL || the_dog->owner == NULL)
{
free(the_dog->name);
free(the_dog->owner);
free(the_dog);
return (NULL);
}

the_dog->age = age;
return (the_dog);
}
