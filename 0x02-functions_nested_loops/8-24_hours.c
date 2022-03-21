#include "main.h"
/**
 * jack_bauer - prints all time
 */
void jack_bauer(void)
{
	int a = 0, b = 0, c = 0, d = 0, e = 0;

	while (a <= 2)
{
	d = c = b = 0;
	while (b <= 9)
{
	if (e != 0)
	break;
	c = d = 0;
	while (c <= 5)
{
	d = 0;
	while (d <= 9)
{
	if (a == 2 && b == 3 && c == 5 && d == 9)
	e++;

	_putchar('0' + a);
	_putchar('0' + b);
	_putchar('0' + 10);
	_putchar('0' + c);
	_putchar('0' + d);
	_putchar('\n');
	d++;
}
	c++;
}
	b++;
}
	a++;
}
}



