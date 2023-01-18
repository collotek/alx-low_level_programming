#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - new dog
 * @name: name of dog
 * @age:age of the dog
 * @owner: owner of the dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *doggy;

	doggy = malloc(sizeof(struct dog));
	if (doggy == NULL)
		return (NULL);
	doggy->name = name;
	doggy->age = age;
	doggy->owner = owner;

	return (doggy);
}
