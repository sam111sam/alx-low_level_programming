#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
{
	putchar(alp);
	putchar('\n');
	alp++;
}
	return (0);
}
