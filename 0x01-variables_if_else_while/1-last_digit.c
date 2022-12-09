#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program to get last digit of a number
 * Return: 0 (Success)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int rem;

       	rem = n % 10;
	if (rem == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, rem);
	}
	else if (rem <= 5)
	{
		printf("Last digit of %d is %d and is less than 6\n", n, rem);
	}
	else 
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, rem);
	}
	return (0);
}
