#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: integer
 * Return: pointer to the allocated memory
 * incase it fails status value is 98
 */
void *malloc_checked(unsigned int b)
{
	int *c;

	c = malloc(b);
	if (c == NULL)
		exit(98);
	return (c);
}
