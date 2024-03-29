#include "main.h"
/**
 * create_file - creates a file
 * @filename: pointer to filename to create
 * @text_content: pointer to string to write to file
 * Return: -1 on failure, 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, l = 0;

	if (filename == NULL)
		return (0);

	if (text_content != NULL)
	{
		while (text_content[l])
			l++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, l);

	if (o == -1 || w == -1)
	{
		return (-1);
	}

	close(o);

	return (1);
}
