#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - function that adds a new node at the end of a linked list
 * @head: pointer to the pointer of the head
 * @n: the value of the n
 *
 * Return: address of the new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;

new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
}
else
{
listint_t *current;
current = *head;

while (current->next != NULL)
{
current = current->next;
}
current->next = new_node;
}

return (*head);
}
