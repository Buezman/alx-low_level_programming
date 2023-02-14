#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements of array
 * @size: number of bytes for each array element
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *temp;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);

	temp = mem;

	for (i = 0; i < (size * nmemb); i++)
		temp[i] = '\0';

	return (mem);
}
