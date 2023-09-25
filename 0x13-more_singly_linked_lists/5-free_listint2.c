#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint2 - function frees memory
 * @head: the pointer to the head of the list
 *
 * Return: Nothing
*/

void free_listint2(listint_t **head)
{
listint_t *temp;
while (*head != NULL)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
*head = NULL;
}
