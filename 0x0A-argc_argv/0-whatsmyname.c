#include <stdio.h>
/**
 * main - program that prints it's method name
 * @argc: number of command line arguments
 * @argv: array of commandline arguments
 * Return: 0
 *
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
