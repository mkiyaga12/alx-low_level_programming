#include "lists.h"
#include <stdio.h>

/**
 * print_listint - elements of a linked list
 * @h:type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t num = 0;

while (h)
{
printf("%d\n", h->n);
num++;
h = h->next;
}

return (num);
}
