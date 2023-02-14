#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments of a program to a word
 * @ac: number of arguments in program
 * @av: pointer to array of arguments
 * Return: concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *word;
	int i, j, n = 0, l = ac;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			l++;
		}
	}

	word = malloc(sizeof(char) * (l + 1));

	if (word == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			word[n++] = av[i][j];
		}

		word[n++] = '\n';
	}

	word[l] = '\0';

	return (word);
}
