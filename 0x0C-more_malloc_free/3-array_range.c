#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: min interger
 * @max: max integer
 * Return: pointer to a newly created array
 */
int *array_range(int min, int max)
{
	int *num;
	int j;

	if (min > max)
		return (NULL);

	num = malloc(sizeof(*num) * ((max - min) + 1));

	if  (num == NULL)
		return (NULL);

	for (j = 0; min <= max; j++, min++)
		num[j] = min;

	return (num);
}
