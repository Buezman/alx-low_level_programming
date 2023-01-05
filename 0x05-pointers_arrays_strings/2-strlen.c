#include "main.h"
/**
 * _strlen - gets the length of a string
 * @s: string
 * Return: length of string s
 */
int _strlen(char *s)
{
	int l = 0;

	while (*(s + l) != '\0')
	{
		l++;
	}
	return (l);
}
