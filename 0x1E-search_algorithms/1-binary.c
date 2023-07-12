#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_search - searches value in sorted array using Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: index where value is found, return -1 if array Null
 * present or array null
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, mid_index;
	int result;

	if (array == NULL || size < 1)
		return (-1);
	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i == size - 1)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}

	if (size % 2 == 0)
	{
		mid_index = (size / 2) - 1;
		size = size / 2;
		if (array[mid_index] > value)
			size -= 1;
	}
	else
	{
		mid_index = (size - 1) / 2;
		size = mid_index;
	}
	if (array[mid_index] == value)
		return (mid_index);
	else if (array[mid_index] < value)
	{
		result = binary_search((array + (mid_index + 1)), size, value);
		if (result != -1)
			result += mid_index + 1;

		return (result);
	}
	else if (array[mid_index] > value)
		return (binary_search(array, size, value));
	return (-1);
}
