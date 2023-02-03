#include "main.h"
/**
 * reverse_array - reverses an integer array
 * @a: integer array
 * @n: length of array
 * Return: void
 *
 */
void reverse_array(int *a, int n)
{
	int  temp, i = 0, l = n - 1;

	while (l >= (n / 2))
	{
		temp = a[i];
		a[i] = a[l];
		a[l] = temp;
		i++;
		l--;
	}
}
