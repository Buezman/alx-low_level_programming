#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the start of a linked list
 * @head: pointer to the head of a linked list
 * @str: string to be prepended to linked list
 * Return: new linked linked list
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	char *s;
	int n;
	list_t *result;

	result = malloc(sizeof(list_t));
	if (result == NULL)
		return (NULL);

	s = strdup(str);
	if (s == NULL)
	{
		free(result);
		return (NULL);
	}

	for (n = 0; str[n];)
		n++;

	result->str = s;
	result->len = n;
	result->next = *head;

	*head = result;

	return (result);
}
