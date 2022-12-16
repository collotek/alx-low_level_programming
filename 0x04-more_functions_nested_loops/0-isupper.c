#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase
 * @c: input integer
 * Return: 1 if uppercase 0 otherwise
 */
int _isupper(int c)
{
	int i = 0;
	char upp = 'A';

	for (; upp <= 'Z'; upp++)
	{
		if (c == upp)
		{
			i = 1;
			break;
		}
	}
	return (i);
}

