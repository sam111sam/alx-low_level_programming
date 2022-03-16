#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0;
while (num1 <= 9)
{
	num4 = num3 = num2 = 0;
while (num2 <= 9)
{
if (num5 == 1)
break;
	num4 = num3 = 0;
while (num3 <= 9)
{
	num4 = 0;
while (num4 <= 9)
{
	if (num1 < num3 || (num1 == num3 && num2 < num4))
{
	putchar('0' + num1);
	putchar('0' + num2);
	putchar(32);
	putchar('0' + num3);
	putchar('0' + num4);
	if (num1 == 9 && num2 == 8 && num3 == 9 && num4 == 9)
	num5++;
else
{
	putchar(',');
	putchar(32);
}
}
	num4++;
}
	num3++;
}
	num2++;
}
	num1++;
}
	putchar('\n');
	return (0);
}

