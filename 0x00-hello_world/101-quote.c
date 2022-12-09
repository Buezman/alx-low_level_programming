#include<unistd.h>

/**
 * main - program entry point
 * Return: returns 1 (success)
 *
 *
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(1, str, 59);
	return (1);
}
