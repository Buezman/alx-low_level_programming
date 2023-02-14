#include "dog.h"
#include <stdlib.h>

int getlen(char *str);
char *mkcpy(char *str1, char *str2);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * getlen - gets the length of a string
 * @str: given string
 * Return: length of str
 */
int getlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	return (i);
}

/**
 * mkcpy - copies bytes of str2 to str1
 * @str1: string1
 * @str2: string2
 * Return: copied string str1
 */
char *mkcpy(char *str1, char *str2)
{
	int i = 0;

	for (i = 0; str2[i]; i++)
		str1[i] = str2[i];

	str1[i] = '\0';

	return (str1);
}
/**
 * new_dog - creates a new struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner's name
 * Return: new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	mydog = malloc(sizeof(dog_t));

	if (mydog == NULL)
		return (NULL);

	mydog->name = malloc(sizeof(char) * (getlen(name) + 1));

	if (mydog->name == NULL)
	{
		free(mydog);
		return (NULL);
	}

	mydog->owner = malloc(sizeof(char) * (getlen(owner) + 1));

	if (mydog->owner == NULL)
	{
		free(mydog->name);
		free(mydog);
		return (NULL);
	}

	mydog->name = mkcpy(mydog->name, name);
	mydog->age = age;
	mydog->owner = mkcpy(mydog->owner, owner);

	return (mydog);
}
