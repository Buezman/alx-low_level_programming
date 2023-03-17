#include "lists.h"

/**
 * sum_dlistint - sums all the data (n) of a linked list
 * @head: head of linked list
 * Return: sum of data(n) of linked list
 *
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
