#include "main.h"
/**
 * *_strchr - finds a character in a string
 * @s: input string
 * @c: character to be located
 * Return: returns the pointer to first occurence of c
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	return ('\0');
}
