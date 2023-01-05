#include "main.h"
/**
 * str_len - gets the length of a string
 * @s: string
 * Return: length of string s
 */
int str_len(char *s)
{
	int l = 0;

	while (*(s + l) != '\0')
	{
		l++;
	}
	return (l);
}
