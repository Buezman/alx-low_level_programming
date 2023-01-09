#include "main.h"
/**
 * _strlen - gets the length of a string
 * @s: given string
 * Return: integer, length of given string
 */
int _strlen(char *s)
{
	int i;

	while (*(s + i) != '\0')
		i++;

	return (i);
}
