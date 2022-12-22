#include "main.h"

/**
 * string_toupper - function that changes all lowercase of
 * a string to uppercase
 * @st: input string
 * Return: reversed string
 */
char *string_toupper(char *st)
{
	int ct = 0;

	while (*(st + ct) != '\0')
	{
		if ((*(st + ct) >= 97) && (*(st + ct) <= 122))
			*(st + ct) = *(st + ct) - 32;
		ct++;
	}
	return (st);
}
