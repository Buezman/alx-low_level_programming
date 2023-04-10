#include "lists.h"

/**
 * list_len - returns the length of a linked list
 * @h: head of linked list
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
