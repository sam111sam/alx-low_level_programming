#include <stdio.h>
/**
 * main - entry
 * @argc: no of args
 * @argv: args
 * Return: 0(success) | 1(failure)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
