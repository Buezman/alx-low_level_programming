#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * @array: given arrray
 * @size: size of array;
 * @action: function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; size-- > 0; i++)
		action(array[i]);
}
