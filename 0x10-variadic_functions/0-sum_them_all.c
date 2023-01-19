#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum up all parameters
 * @n: number of parameters
 * @...: parameters
 * Return: returns 0 if n = 0, else sum 
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, sum = 0;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		sum += var_args(numbers, int);
	}

	va_end(numbers);

	return (sum);
}
