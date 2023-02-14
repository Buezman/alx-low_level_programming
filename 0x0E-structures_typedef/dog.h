#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a new type describing a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

#endif
