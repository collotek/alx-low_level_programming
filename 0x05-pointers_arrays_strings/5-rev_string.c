#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string input
 * Return: nothing
 */
void rev_string(char *s)
{
	int c = 0, a, b;
	char *d, e;

	while (c >= 0)
	{
		if (s[c] == '\0')
			break;
		c++;
	}
	d = s;
	for (a = 0; a < (c - 1); a++)
	{
		for (b = a + 1; b > 0; b--)
		{
			e = *(d + b);
			*(d + b) = *(d + (b - 1));
			*(d + (b - 1)) = e;
		}
	}
}
