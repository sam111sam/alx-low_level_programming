#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num <= 54)
{
	if (num > 9 && num < 49)
{
	num++;
	continue;
}
	putchar('0' + num);
	num++;
}
	putchar('\n');
	return (0);
}
