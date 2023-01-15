#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: amount of bytes
 * Return: pointer to allocated memory
 * if it fails should return null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int cs1, cs2, cs3, t;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (cs1 = 0; s1[cs1] != '\0'; cs1++)
		;
	for (cs2 = 0; s2[cs2] != '\0'; cs2++)
		;
	if (n > cs2)
		n = cs2;

	cs3 = cs1 + n;
	s3 = malloc(cs3 + 1);

	if (s3 == NULL)
		return (NULL);

	for (t = 0; t < cs3; t++)
		if (t < cs1)
			s3[t] = s1[t];
		else
			s3[t] = s2[t - cs1];
	s3[t] = '\0';

	return (s3);
}
