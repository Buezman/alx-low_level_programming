#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
/**
 * struct lists_s - singly linked list data structure
 * @str: malloced string
 * @len: length of string str
 * @next: points to nextmode
 * Description - singly linked node structure
 */

typedef struct lists_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
