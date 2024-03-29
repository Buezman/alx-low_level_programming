#include "lists.h"

/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: pointer to the head of a doubly-linked-list
 * Return: number of nodes in the list
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (n);
}
