#include "main.h"

/**
 * _strlen - returns the length of a string
 * @x: pointer
 * Return: c
 */
int _strlen(char *x)
{
	int c = 0;

	while (*(x + c) != '\0')
		c++;
	return (c);
}
