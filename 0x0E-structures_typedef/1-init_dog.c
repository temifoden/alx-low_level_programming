#include "dog.h"
#include <stddef.h>


/**
 * init_dog- function entry
 * @d: first parameter
 * @name: second parameter
 * @age: third parameter
 * @owner: fourth parameter
 *
 * Return: struct function;
*/



void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
