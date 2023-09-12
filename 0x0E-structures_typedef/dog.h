#ifndef DOG_STRUCT_H
#define DOG_STRUCT_H

/**
 * struct dog - the struct name
 * @name: first member
 * @age: second member
 * @owner: third member
*/

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif
