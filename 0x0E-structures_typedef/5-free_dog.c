#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free the dogs
 * @d: array of dogs
 * Description: free memory of struect
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
