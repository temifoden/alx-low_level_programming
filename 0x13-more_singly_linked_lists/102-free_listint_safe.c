#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_listint_safe - Function frees the memory space of a linked list
 * @h: pointer to the head pointer
 *
 * Return: Return count
*/

size_t free_listint_safe(listint_t **h)
{
size_t count;
listint_t *current = *h;

while (current != NULL)
{
listint_t *next_node = current->next;
free(current);
current = next_node;
count++;
}
*h = NULL;
return (count);
}
