#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: byte size
 * Return: pointer to allocated memory
 * if nmemb or size is 0 return NULL
 * if malloc fails return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int n;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);

	if (s == NULL)
		return (NULL);

	for (n = 0; n < (nmemb * size); n++)
		s[n] = 0;

	return (s);
}
