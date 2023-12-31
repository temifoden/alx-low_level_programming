#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Freees a list_t list
 * @head: Pointer to the head of the list.
 *
 * Return: Nothing
*/

void free_list(list_t *head)
{
list_t *current, *next;

current = head;

while (current != NULL)
{
next = current->next;
free(current->str);
free(current);
current = next;
}
}
