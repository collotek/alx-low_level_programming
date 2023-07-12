#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - searches value in array using Linear search algorithm
 * using linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: index where value is found, return -1 if array Null
 * present or array null
 */

int linear_search(int *array, size_t size, int value)
{
	int brek = 0;
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
			brek = 1;
			break;
		}
	}
	if ((brek == 0) | (array == NULL))
		return (-1);
return (-1);
}


