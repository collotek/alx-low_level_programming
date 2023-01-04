

#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: memory area to copy to
 * @src:memory area to copy from
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
		*(dest + m) = *(src + m);
	return (dest);
}
