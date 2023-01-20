#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on an array
 * @array: given array
 * @size: size of the array
 * @action: function to be executed
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t k;

	if (array != NULL && action != NULL)
	{
		for (k = 0; k < size; k++)
		{
			action(*array);
			array++;
		}
	}
}
