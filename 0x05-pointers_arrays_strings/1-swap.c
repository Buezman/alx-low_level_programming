#include "main.h"
/**
 * swap_int - swaps two numbers
 * @a: first number
 * @b: second number
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
