#include "main.h"
/**
 * main - prints sequence of characters
 * Return: 0 (success)
 *
 */
int main(void)
{
	int num[] = {72, 11, 108, 98, 101, 114, 116, 111, 110};
	int i, l;

	l = sizeof(num) / sizeof(int);
	for (i = 0; i < l; i++)
	{
		_putchar(num[i]);
	}
	_putchar('\n');
	return (0);
}
