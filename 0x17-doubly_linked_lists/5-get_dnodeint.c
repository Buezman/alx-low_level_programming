#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at index of linked list
 * @head: head of linked list
 * @index: index of node to get
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
		i++;
	}

	return (head);
}
