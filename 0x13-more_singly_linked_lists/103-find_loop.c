#include "lists.h"
#include <stddef.h>

/**
 * find_listint_loop - looks for a loop in a linked list
 * @head: pointer to the head of the list
 *
 * Return: the address of the beginning of the loop
*/

listint_t *find_listint_loop(listint_t *head)
{
listint_t *tortoise = head;
listint_t *hare = head;

while (tortoise && hare && hare->next)
{
tortoise = tortoise->next;
hare = hare->next->next;

if (tortoise == hare)
{
tortoise = head;

while (tortoise != hare)
{
tortoise = tortoise->next;
hare = hare->next;
}
return (tortoise);
}
}
return (NULL);
}
