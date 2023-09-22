#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * list_len - function entry
 * @h: pointer to struct
 *
 * Return: value
*/

size_t list_len(const list_t *h)
{
size_t count;
count = 0;

while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
