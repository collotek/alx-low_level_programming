#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - array for prints a string
 * @size: number of elements in the array
 * @c: char
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *buff;
	unsigned int place;

	if (size == 0)
	{
		return (NULL);
	}
	/*introduce malloc*/
	buff = (char *) malloc(size * sizeof(c));

	if (buff == 0)
	{
		return (NULL);
	}
	else
	{
		place = 0;
		while (place < size)
		{
			*(buff + place) = c;
			place++;
		}
		return (buff);
	}
}
