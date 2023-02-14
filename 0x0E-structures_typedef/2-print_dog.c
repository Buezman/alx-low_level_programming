#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints details of a dog d
 * @d: struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	char *nil = "(nil)";

	if (d != NULL)
	{
		printf("Name: %s\n", d->name == NULL ? nil : d->name);
		printf("Age: %f\n", d->age == NULL ? nil : d->age);
		printf("Owner: %s\n", d->owner == NULL ? nil : d->owner);
	}
}
