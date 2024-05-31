#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry
 * @argc: no. args
 * @argv: args
 * Return: 0|1
 */
int main(int argc, char *argv[])
{
	int i, j, len, result = 0;

	if (argc == 1)
	{
		printf("%i\n", result);
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0, len = strlen(argv[i]); j < len; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%i\n", result);
	return (0);
}
