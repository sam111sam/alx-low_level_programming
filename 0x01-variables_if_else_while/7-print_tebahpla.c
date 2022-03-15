#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 122;

	while (num >= 97)
{
	putchar('\0' + num);
	num--;
}
	putchar('\n');
	return (0);
}
