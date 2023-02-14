#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a new dog
 * @d: dog to be initialized
 * @name: name of dog d
 * @age: age of dog d
 * @owner: owner of dog d
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
