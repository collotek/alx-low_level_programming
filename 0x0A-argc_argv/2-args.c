#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: no of arguments passed
 * @argv: arguments passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		int i = 0;

		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	return (0);
}
