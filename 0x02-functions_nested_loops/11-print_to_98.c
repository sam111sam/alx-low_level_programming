#include "main.h"
/**
 * print_to_98 - print number fron n to 98
 * @n: the given number
 */
void digit(int n);
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 0)
		{
			_putchar('-');
			digit(-1 * n);
		}
		else
		{
			digit(n);
		}
		_putchar(',');
		_putchar(' ');
		if (n > 98)
		{
			n--;
		}
		else
			n++;
	}
	_putchar('0' + 9);
	_putchar('0' + 8);
	_putchar('\n');
}
/**
 * digit - print digit
 * @n: parameter
 */
void digit(int n)
{
	if (n < 10)
	{
		_putchar('0' + n);
	} else
	{
		digit(n / 10);
		_putchar('0' + (n % 10));
	}
}
