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
 * _strcpy - copy string
 * @src: array of elements
 * @dest: destination array
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strdup - returns apointer to a newly allocated space in memory
 * @str: pointer to a character
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == 0)
	{
		return (NULL);
	}
	_strcpy(ptr, str);
	return (ptr);
}
