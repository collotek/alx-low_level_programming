#include "main.h"

/**
 * *_strncpy - work exactly like the strncpy
 * @dest: destination
 * @src: source
 * @n: input integer
 * Return:pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];
	for (; j < n; j++)
		dest[j] = '\0';
	return (dest);
}
