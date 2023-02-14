#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strngs
 * @s1: string 1
 * @s2: string 2
 * Return: NULL if string concatenation is NULL
 * otherwise string concatenation
 */
char *str_concat(char *s1, char *s2)
{
	char *res;
	int i, n = 0, l = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		n++;

	for (i = 0; s2[i]; i++)
		n++;

	res = malloc(sizeof(char) * (n + 1));

	if (res == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		res[l++] = s1[i];

	for (i = 0; s2[i]; i++)
	{
		res[l++] = s2[i];
	}

	return (res);
}
