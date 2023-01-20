#include "3-calc.h"

/**
 * main - arguments for struct
 * @argc: number of a arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int k, l;
	int (*d)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	d = get_op_func(argv[2]);
	if (d == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	k = atoi(argv[1]);
	l = atoi(argv[3]);

	printf("%d\n", d(k, l));
	return (0);
}
