#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min value in the array
 * @max: max value in array
 * Return: integer array
 */
int *array_range(int min, int max)
{
	int n = max - min + 1;
	int *arr;
	int i;

	if (max < min)
		return (NULL);

	arr = malloc(sizeof(int) * n);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		arr[i] = min + i;

	return (arr);
}
