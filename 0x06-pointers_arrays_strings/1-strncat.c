#include "main.h"

/**
 * *_strncat - use n bytes from src and src does nt need to be terminated
 * @n: input integer
 * @src: source
 * @dest: destination
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int ct1 = 0, ct2 = 0;

	while (*(dest + ct1) != '\0')
	{
		ct1++;
	}
	while (ct2 < n)
	{
		*(dest + ct1) = *(src + ct2);
		if (*(src + ct2) == '\0')
			break;
		ct1++;
		ct2++;
	}
	return (dest);
}
