#include "main.h"
/**
 * print_to_98 - print number fron n to 98
 * @n: the given number
 */
void print_to_98(int n)
{
	while (n != 98)
{
	if (n >= 0)
{
	if (n < 10)
{
	_putchar('0' + (n % 10));
}
	else if (n < 100)
{
	_putchar('0' + (n / 10));
	_putchar('0' + (n % 10));
}

	else
{
	_putchar('0' + ((n / 10) / 10));
	_putchar('0' + ((n % 100) / 10));
	_putchar('0' + (n % 10));
}
}
	else
{
	_putchar('-');
	if (n <= -10)
	_putchar('0' + (-(n / 10)));
	_putchar('0' + (-(n % 10)));
}
	_putchar(',');
	_putchar(' ');
	if (n > 98)
	n--;
	else if (n < 98)
	n++;
}
	_putchar('0' + 9);
	_putchar('0' + 8);
	_putchar('\n');
}

