#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to the head of the list
 *
 * Return: Number of node
 *
*/

size_t print_listint(const listint_t *h)
{
size_t count;
count = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
