#include "main.h"
#include <stdio.h>

/**
 * *_strcat - appends src to dest and overwrites null byte
 * at the end of dest and adds a terminating null byte
 * @src: pointer to a character
 * @dest: pointer to a character
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

