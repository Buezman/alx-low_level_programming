#include "lists.h"

/**
 * listint_len - returns the length of a linked list
 * @h: head of linked list
 * Return: size of linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t l = 0;

	while (h)
	{
		h = h->next;
		l++;
	}

	return (l);
}
