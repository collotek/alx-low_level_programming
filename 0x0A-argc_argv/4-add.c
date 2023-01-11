#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: no of arguments
 * @argv: arguments
 * Return: 0 if success and 1 and error if not
 */
int main(int argc, char *argv[])
{
	unsigned int i, sum, j;

	sum = 0;

	if (argc < 3)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (argc-- && argc > 0)
	{
		for (i = 0; argv[argc][i] != '\0'; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
					return (1);
			}
		}
		j = atoi(argv[argc]);
		sum += j;
	}
	printf("%d\n", sum);
	return (sum);
}
