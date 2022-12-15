
#include "main.h"

/**
 * _isupper - checks uppercase character
 * @c: c is an ascii character
 *
 * Return: 1 (if letter)
 */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
