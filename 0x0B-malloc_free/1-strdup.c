#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be copied
 * Return: pointer of copied string or NULL
 *
 */
char *_strdup(char *str)
{
	char *dup;
	int i, n = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		n++;

	dup = malloc(sizeof(char) * (n + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	dup[n] = '\0';

	return (dup);

}
