#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a linked list
 * @h: pointer to linked list
 * Return: returns the length of the list
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		n++;
		h = h->next;
	}
	return (n);
}
