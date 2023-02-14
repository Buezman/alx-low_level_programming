#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates s1 and n bytes of s2
 * @s1: string1
 * @s2: string2
 * @n: number of bytes of s2 to be concatenated
 * Return: concatenated string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, l = 0, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		l++;

	for (i = 0; s2[i]; i++)
	{
		if (i == n)
			break;
		l++;
	}

	str = malloc(sizeof(char) * (l + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str[j++] = s1[i];

	for (i = 0; j < l; i++)
		str[j++] = s2[i];

	str[l] = '\0';

	return (str);
}
