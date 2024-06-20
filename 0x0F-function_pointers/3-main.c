#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 * @argc: argument counter
 * @argv: array of args
 * Return: int
 */
int main(int argc, char *argv[])
{
	int x, y;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);
	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && y == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%i\n", op(x, y));
	return (0);
}
