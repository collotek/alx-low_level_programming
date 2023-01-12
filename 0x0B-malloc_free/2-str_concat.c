#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strlen - count array
 * @s: array of elements
 * Return: 1
 */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * str_concat - concats two strings
 * @s1: one array
 * @s2:second array
 * Return:Dynamic array
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int a, b, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = (_strlen(s1) + _strlen(s2) + 1);
	ptr = (char *) malloc(size * sizeof(char));
	if (ptr == 0)
	{
		return (NULL);
	}

	for (a = 0; *(s1 + a) != '\0'; a++)
		*(ptr + a) = *(s1 + a);

	for (b = 0; *(s2 + b) != '\0'; b++)
	{
		*(ptr + a) = *(s2 + b);
		a++;
	}
	return (ptr);
}
