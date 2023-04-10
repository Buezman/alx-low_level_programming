#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - prints befor the main function
 * Returns: void
 */
void hare(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
