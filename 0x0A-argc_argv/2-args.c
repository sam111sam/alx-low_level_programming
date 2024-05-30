#include <stdio.h>
/**
 * main - entry
 * @argc: - no. args
 * @argv: args
 * Return: 0|1
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
