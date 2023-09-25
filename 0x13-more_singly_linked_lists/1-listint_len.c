#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * listint_len - function returns the number of nodes in a linked list
 * @h: the head pointer
 *
 * Return: total number of nodes
 *
*/
size_t listint_len(const listint_t *h)
{
size_t count;
count = 0;

while (h != NULL){
h = h->next;
count++;
}

return (count);
}
