#include "main.h"
/**
 * print_number - print any number
 * @n: given number
 */
void print_number(int n)
{
	int lastdigit;
	int rev = 0;
	int z = 0;

	if (n < 0)
	{
		_putchar('-');
		lastdigit = -(n % 10);
		n /= -10;
	}
	else
	{
		lastdigit = n % 10;
		n /= 10;
	}
	if (n % 10 == 0)
		z++;
	while (n > 0)
	{
	rev = rev * 10 + (n % 10);
	n /= 10;
	}
	while (rev > 0)
	{
		_putchar('0' + (rev % 10));
		rev /= 10;
	}
	if (z != 0 && n != 0)
		_putchar('0');
	_putchar('0' + lastdigit);
}

