#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - program entry point
 * Result: 0 (Success)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	char result[];

	if (n > 0)
	{
	  result[] = "is postive";
	}
	else if (n < 0)
	{
	  result[] = "is negative";
	}
	else
	{
	  result[] = "is zero";
	}
	printf("%d %d\n", n, result);
	return (0);
}
