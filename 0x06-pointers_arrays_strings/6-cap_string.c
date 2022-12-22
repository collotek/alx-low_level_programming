#include "main.h"

/**
 * *cap_string - capitalize all words of a string
 * @st: input string
 * Return: pointer to destination
 */
char *cap_string(char *st)
{
	int ct = 0, a;
	int wrds[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(st + ct) >= 97 && *(st + ct) <= 122)
		*(st + ct) = *(st + ct) - 32;
	ct++;
	while (*(st + ct) != '\0')
	{
		for (a = 0; a < 13; a++)
		{
			if (*(st + ct) == wrds[a])
			{
				if ((*(st + (ct + 1)) >= 97) && (*(st + (ct + 1)) <= 122))
					*(st + (ct + 1)) = *(st + (ct + 1)) - 32;
				break;
			}
		}
		ct++;
	}
	return (st);
}
