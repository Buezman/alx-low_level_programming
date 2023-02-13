#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: character to locate
 * Return: pointer to character if found, else null
 *
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}

	return ('\0');
}
