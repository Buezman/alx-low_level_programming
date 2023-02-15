#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @array: array of integers
 * @size: size of array
 * @cmp: function for comparing integere
 * Return: first index of integer or -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	while (size-- > 0)
	{
		if (cmp(*array) != 0)
			return (i);
		array++;
		i++;
	}

	return (-1);
}
