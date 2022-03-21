#include "main.h"
/**
 * times_table - times table up to 9
 */
void times_table(void)
{
	int a = 0;

	while (a <= 9)
{
	int b = 0;

	while (b <= 9)
{
	if (a * b >= 10)
{
	_putchar(((a * b) / 10) + '0');
	_putchar(((a * b) % 10) + '0');
	if (b != 9)
{
	_putchar(',');
	_putchar(' ');
}
}
	else
{
	if (b != 0)
{
	_putchar(' ');
}
	_putchar('0' + a * b);
	if (b != 9)
{
	_putchar(',');
	_putchar(' ');
}
}
	b++;
}
	_putchar('\n');
	a++;
}
}

