#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a block of memory
 * @ptr: pointer previously allocated memory
 * @old_size: allocated space for ptr
 * @new_size: size of new memory block
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *temp, *p2;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);
		if (mem == NULL)
			return (NULL);
		return (mem);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p2 = ptr;
	mem = malloc(sizeof(*p2) * new_size);
	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}
	temp = mem;
	for (i = 0; i < old_size && i < new_size; i++)
		temp[i] = *p2++;
	free(ptr);
	return (mem);
}
