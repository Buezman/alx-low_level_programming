#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints parameters seperated by a delimeter
 * @*seperator: delimeter between parameters
 * @n: number of parameters
 * @...: parameters
 * Return: String of parameters seperated by delimeter
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list chars;
	unsigned int i;

	va_start(chars, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(chars, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(chars);
}
