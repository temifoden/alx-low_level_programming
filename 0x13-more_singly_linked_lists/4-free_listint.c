#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint - function frees memory
 * @head: the pointer to the head of the list
 *
 * Return: Nothing
*/

void free_listint(listint_t *head)
{
while (head != NULL)
{
listint_t *temp = head->next;
free(head);
head = temp;
}
}
