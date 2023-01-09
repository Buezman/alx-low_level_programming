#include "main.h"
/**
 * _atoi - converts a string to a number
 * @s: input string
 * Return: converted string as number
 */
int _atoi(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
