#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array
 * @size: size of array
 * @c: character to store
 * Return: pointer to created array
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);
	a = malloc(sizeof(c) * size);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
