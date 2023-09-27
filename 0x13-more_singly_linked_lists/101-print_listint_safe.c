#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - function prints every node of a linked list
 * @head: the pointer to the head
 *
 * Return: The number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
size_t count;
const listint_t *visited[1024];

while (head != NULL)
{
size_t i;
for (i = 0; i < count; i++)
{
if (head == visited[i])
{
printf("-> [%p] %d\n", (void *)head, head->n);
return (count);
}
}
visited[count++] = head;
printf("[%p] %d\n", (void *)head, head->n);

head = head->next;
}

return (count);
}
