#ifndef VARIADIC_FUNCTIONS_H_
#define VARIADIC_FUNCTIONS_H_

#include <stdarg.h>
/**
 * struct printer - struct defining a rinter
 * @symbol: represents a data type
 * @print: pointer to print function
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;

int sum_them_all(const unsigned int n, ...);


#endif
