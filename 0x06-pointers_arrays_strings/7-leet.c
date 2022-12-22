#include "main.h"

/**
 * leet - encodes a string to 1337
 * @st: string input
 * Return: the pointer to the destination
 */
char *leet(char *st)
{
	int ct = 0, a;
	int small_letters[] = {97, 101, 111, 116, 108};
	int big_letters[] = {65, 69, 79, 84, 76};
	int nums[] = {52, 51, 48, 55, 49};

	while (*(st + ct) != '\0')
	{
		for (a = 0; a < 5; a++)
		{
			if (*(st + ct) == small_letters[a] || *(st + ct) == big_letters[a])
			{
				*(st + ct) = nums[a];
				break;
			}
		}
		ct++;
	}
	return (st);
}
