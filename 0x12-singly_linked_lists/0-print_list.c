#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - function entry
 * @h: pointer pointing to varable
 *
 * Return: a value
*/

size_t print_list(const list_t *h)
{
    size_t count;
    count = 0;

    while(h != NULL)
    {
        if (h->str == NULL)
            printf("[0] (nil)");
        
        else
            printf("[%d] %s", h->len, h->str);

        h = h->next;
        count++;
    }
    return (count);
}
