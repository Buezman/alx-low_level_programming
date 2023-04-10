#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds new node at end of a linked list
 * @head: pointer to head of a linked list
 * @str: string to add
 * Return: new linked list with appended node
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	int n;
	list_t *node, *last;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	s = strdup(str);
	if (s == NULL)
	{
		free(node);
		return (NULL);
	}

	for (n = 0; str[n];)
		n++;

	node->str = s;
	node->len = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = node;
	}

	return (*head);
}
