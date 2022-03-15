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
	int num3 = 2;

	while (num1 <= 9)
{
	num3 = 2;
	num2 = 1;
	while (num2 <= 9)
{
	num3 = 2;
while (num3 <= 9)
{
if (num1 < num2 && num2 < num3 && num1 != num2 && num1 != num3 && num2 != num3)
{
	putchar(num1 + '0');
	putchar(num2 + '0');
	putchar(num3 + '0');
	num3++;
	if (num1 != 7)
{
	putchar(',');
	putchar(32);
}
}
	else
{
	num3++;
}
}
	num2++;
}
	num1++;
}
	putchar('\n');
	return (0);
}
