#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements in alinked list
 * @h: linked list
 * Return: number of elements in the linked list
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
