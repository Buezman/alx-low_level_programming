#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints a char to stdout
 * @c: char
 * Return: integer
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
