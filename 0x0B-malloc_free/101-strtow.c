#include "main.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
char **strtow(char *str)
{
	char **arr;
	int i, words = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			words++;
	}

	return (arr);
}
