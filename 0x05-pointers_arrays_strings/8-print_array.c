#include "main.h"
#include <stdio.h>
/**
 * print_array - prints all elements of an array
 * @a: pointer to array
 * @n: number of elements in array
 * Return: void
 *
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i < (n - 1))
				prinf("%d, ", a[i]);
			else
				prinf("%d\n", a[i]);
		}
	}
}
