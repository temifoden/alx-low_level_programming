#ifndef __MAIN_H__
#define __MAIN_H__
#include <stdlib.h>
#include <stdio.h>

/**
 * struct dlistint_t - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 * 
 * Description: doubly linked list node structure
*/

typedef struct dlistint_t
{
    int n;
    struct dlistint_t *prev;
    struct dlistint_t *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif