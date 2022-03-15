#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1 = 0;
	int num2 = 1;

	while (num1 <= 9)
{
	num2 = 1;
	while (num2 <= 9)
{
	if (num1 < num2 && num1 != num2)
{
	putchar(num1 + '0');
	putchar(num2 + '0');
	num2++;
	if (num1 != 8)
{
	putchar(',');
	putchar(32);
}
}
	else
{
	num2++;
}
}
	num1++;
}
	putchar('\n');
	return (0);
}
