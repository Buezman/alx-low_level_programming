#include "main.h"
/**
 * main - prints sequence of characters
 * Return: 0 (success)
 *
 */
int main(void)
{
	int num[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int i, l;

	l = sizeof(num) / sizeof(int);
	for (i = 0; i < l; i++)
	{
		_putchar(num[i]);
	}
	_putchar('\n');
	return (0);
}
